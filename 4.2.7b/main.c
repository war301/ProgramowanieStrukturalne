#include <stdio.h>
#include <stdlib.h>
void fun(int n,int tab1[],int tab2[],int tab3[])
{
    for(int i=0;i<n;i++)
    {
        if(tab1[1]=tab2[i])
        {
            tab3[i]=tab1[i];
        }
        if(tab1[1]>tab2[i])
        {
            tab3[i]=tab1[i];
        }
        if(tab1[i]<tab2[i])
        {
            tab3[i]=tab2[i];
        }
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
