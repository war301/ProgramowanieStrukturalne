#include <stdio.h>
#include <stdlib.h>
int fun(int n ,int *wsk)
{
    *wsk=n;
    return *wsk;
}
int main()
{
    int n=2,wsk=3;
    printf("%d %d",n,fun(n,&wsk));
    return 0;
}
