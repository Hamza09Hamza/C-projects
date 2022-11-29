#include <stdlib.h>
#include <stdio.h>

int **allouerMat(int n, int m)
{
    int **L, *C;
    L = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        L[i] = (int *)malloc(m * sizeof(int));
    }
    return L;
}

void remplirMat(int **M, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            M[i][j] = i + j;
        }
    }
}

void afficherMat(int **M, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d", M[i][j]);
        }
        printf("\n");
    }
}

int **genererMat(int n, int m, int k)
{
    int **M;
    M = allouerMat(n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            M[i][j] = rand() % (k + 1);
        }
    }
}

int **triangulaire(int n, int pos)
{
    int **L, *C;
    L = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        L[i] = (int *)malloc((i + 1) * sizeof(int));
    }
    for (int i = 0; i < n; i++)
    {
        for (int y = 0; y < i + 1; y++)
        {
            L[i][y] = 1;
            printf("%d", L[i][y]);
        }
        printf("\n");
    }
    return L;
}

void main()
{
    int **M;
    M = allouerMat(5, 5);
    remplirMat(M, 5, 5);
    afficherMat(M, 5, 5);
}
