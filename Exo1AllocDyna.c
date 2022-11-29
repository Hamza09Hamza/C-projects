#include <stdlib.h>
#include <stdio.h>

int *allouerTab(int n)
{
    int *t;
    t = (int *)malloc(n * sizeof(int));
    return t;
}

void remplirTab(int *T, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Entrez une valeur dans le tableau \n");
        scanf("%d", &T[i]);
    }
}

void afficherTab(int *T, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", T[i]);
    }
    printf("\n");
}

void trierTab(int *T, int n)
{
    int val;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (T[i] > T[j])
            {
                val = T[i];
                T[i] = T[j];
                T[j] = val;
            }
        }
    }
}

int recherche(int *T, int n, int k)
{
    int debtab, b, fintab;
    b = 0;
    debtab = 0;
    fintab = n - 1;
    while ((debtab <= fintab) && (b == 0))
    {
        n = (debtab + fintab) / 2;
        if (k == T[n])
        {
            b = 1;
        }
        else if (k < T[n])
        {
            debtab = n + 1;
        }
        else
        {
            fintab = n - 1;
        }
    }
    if (b == 1)
    {
        return n;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int *T, val, n;
    n = 5;
    T = allouerTab(n);
    remplirTab(T, n);
    afficherTab(T, n);
    trierTab(T, n);
    afficherTab(T, n);
    val = recherche(T, n, 3);
    printf("%d", val);
}
