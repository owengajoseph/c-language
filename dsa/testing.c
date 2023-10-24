#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 4;
    int *b = &a;
    int *c = b;
    *c = 10;
    printf("%d",a);
}
