#include <time.h>
#include <stdio.h>
#define MILLI_S 1000.0
int main()
{
    double deb, fin, tempExec;
    int n, i, f;
    deb = clock();
    do
    {
        printf(" Donnez une nouvelle valeur de n \n");
        scanf("%d", &n);
        f = 1;
        printf("\n Vous avez donne' n= %d", n);
        for (i = 2; i <= n; i++)
            f = f * i;
        printf("\n fact(%d) = %d", n, f);
    } while (n > 0);
    fin = clock();
    tempExec = ((double)(fin - deb)) / CLOCKS_PER_SEC;
    printf("Le temps d'execution en seconde est egal a : %lf:", tempExec);
    return 0;
}
