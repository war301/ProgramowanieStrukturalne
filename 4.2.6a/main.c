#include <stdio.h>
#include <stdlib.h>
void fun(int n,int tab1[],int tab2[])
{
    for(int i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
    }
}
int main()
{
    int tab1[]={1,2,3,4,5};
    int tab2[]={5,4,3,2,1};
    fun(5,tab1,tab2);
    for(int i=0;i<5;i++ )
    {
        printf("%d\n",tab2[i]);
    }
    return 0;
}
