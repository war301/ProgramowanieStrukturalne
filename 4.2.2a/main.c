#include <stdio.h>
#include <stdlib.h>
float fun(int n,int tab[])
{
    float saryt;
    for (int i=0;i<n;i++)
    {
        saryt+=tab[i];
    }
    saryt=saryt/n;
    return saryt;
}
int main()
{
    int tab[]={1,2,3,4,5};
    printf("%f",fun(5,tab));
    return 0;
}
