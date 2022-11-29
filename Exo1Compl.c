#include <stdio.h>
#include <stdlib.h>

struct ABC
{
    float n;
    int a;
} ABC;
struct DEF
{
    float n;
    int a;
} DEF;

int main()
{
    struct ABC q;
    struct DEF k;

    printf("%lu", sizeof(q));
    printf("%lu", sizeof(k));

    return 0;
}
