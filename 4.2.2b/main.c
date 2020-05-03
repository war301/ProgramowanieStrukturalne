#include <stdio.h>
#include <stdlib.h>
int fun(int n,int tab[])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=tab[i];
    }
    return sum;
}
int main()
{
    int tab[]={1,2,3,4,5};
    printf("%d",fun(5,tab));
    return 0;
}
