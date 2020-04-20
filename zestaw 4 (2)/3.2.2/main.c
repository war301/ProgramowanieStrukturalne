#include <stdio.h>
#include <stdlib.h>
int* zmienna(int *n,int *m)
{
    if(*n>*m)
        return m;
    return n;
}
int main()
{
    int n;
    int m;
    printf("podaj liczbe n:");
    scanf("%d",&n);
    printf("podaj liczbe m:");
    scanf("%d",&m);
    printf("%p",zmienna(&n,&m));
    return 0;
}
