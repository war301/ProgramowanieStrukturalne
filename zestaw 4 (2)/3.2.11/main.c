#include <stdio.h>
#include <stdlib.h>
int fun(int unsigned n)
{
    return malloc(n*sizeof(int));
}
int main()
{
    int n=3;
    printf("%p",fun(n));
    return 0;
}
