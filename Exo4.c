#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MILLI_S 1000.0
double deb, fin, tempExec;

void trierTab(int *T, int n)
{
    int val;
    deb = clock();
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
    fin = clock();
    tempExec = ((double)(fin - deb)) / CLOCKS_PER_SEC;
    printf("Le temps d'execution en seconde est egal a : %lf:", tempExec);

    printf("%d", sizeof(T));
}
