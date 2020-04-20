#include <stdio.h>
#include <stdlib.h>
int zmienna(const int *n,const int *m)
{
    return *n+*m;
}
int main()
{
   int n;
    int m;
    printf("podaj liczbe n:");
    scanf("%d",&n);
    printf("podaj liczbe m:");
    scanf("%d",&m);
    printf("%d",zmienna(&n,&m));
    return 0;
}
