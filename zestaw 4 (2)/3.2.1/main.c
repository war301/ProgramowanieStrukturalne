#include <stdio.h>
#include <stdlib.h>
int wieksza(int *n,int *m)
{
    if(*n<*m)
        return *n;
    return *m;
}
int main()
{
    int n;
    int m;
    printf("podaj liczbe n:");
    scanf("%d",&n);
    printf("podaj liczbe m:");
    scanf("%d",&m);
    printf("%d",wieksza(&n,&m));
    return 0;
}
