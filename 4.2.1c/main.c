#include <stdio.h>
#include <stdlib.h>
void fun(int n, int tab[])
{
    for (int i=0;i<n;i++)
    {
        tab[i]*=2;
    }
}
int main()
{
    int tab[]={5,3,2,15,5};
    fun(5,tab);
    for(int i=0;i<5;i++ )
    {
        printf("%d\n",tab[i]);
    }
    return 0;
}
