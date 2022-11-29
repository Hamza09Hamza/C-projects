#include <time.h>
#include <stdio.h>
#define sup 200
int main()
{

    int i, T[10];
    srand(time(NULL)); // pour initialiser la fonction rand
    for (i = 0; i < 10; i++)
        T[i] = rand() % (sup + 1); // nombre aléatoire compris entre 1 et sup
    for (i = 0; i < 10; i++)
        printf("%d \n", T[i]);

    return 0;
}
