#include <stdio.h>
#include <stdlib.h>
void fun( int n, int tab[])
{
    int x;
    for (int i=0;i<n/2;i++)
    {
        x=tab[i];
        tab[i]=tab[n-1-i];
        tab[n-1-i]=x;
    }
}
int main()
{
    int tab[]={1,2,3,4,5};
    fun(5,tab);
    for(int i=0;i<5;i++ )
    {
        printf("%d ",tab[i]);
    }
    return 0;
}
