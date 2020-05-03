#include <stdio.h>
#include <stdlib.h>
void fun(int n, int tab[])
{
    for (int i=0; i<n; i++)
    {
        tab[i]=i;
    }
}
int main()
{
    int n =5;
    int tab[5];
    fun(n,tab);
    for(int i=0;i<n;i++ )
    {
        printf("%d",tab[i]);
    }
    return 0;
}
