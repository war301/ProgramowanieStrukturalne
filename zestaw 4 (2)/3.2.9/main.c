#include <stdio.h>
#include <stdlib.h>
int fun()
{
    return malloc(sizeof(int));
}
int main()
{
    printf("%p",fun());
    return 0;
}
