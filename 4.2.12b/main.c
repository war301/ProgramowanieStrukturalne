#include <stdio.h>
#include <stdlib.h>
void fun(int n, int tab[])
{

    int x=tab[0];
    for (int i=0;i<n-1;i++)
    {
        tab[i]=tab[i+1];
    }
    tab[n-1]=x;
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
