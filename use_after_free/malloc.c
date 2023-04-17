#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *a = malloc(2);
    int *b = malloc(3);
    int *c = malloc(10);

    free(a);
    free(b);
    free(c);
}

