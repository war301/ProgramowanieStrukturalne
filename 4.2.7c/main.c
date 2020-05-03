#include <stdio.h>
#include <stdlib.h>
void fun(int n,int tab1[],int tab2[],int tab3[])
{
    for(int i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
    }
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab2[i];
    }
    for(int i=0;i<n;i++)
    {
        tab1[i]=tab3[i];
    }
}
int main()
{
    int tab1[]={1,2,3,4,5};
    int tab2[]={5,4,3,2,1};
    int tab3[5];
    fun(5,tab1,tab2,tab3);
    for(int i=0;i<5;i++ )
    {
        printf("%d ",tab3[i]);
    }
    return 0;
}
