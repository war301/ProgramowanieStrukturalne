#include <stdio.h>
#include <stdlib.h>
int fun(int unsigned n,int unsigned m,int unsigned k)
{
    int g=0;
    for(n;n<=m;n++)
    {
        if(n%k!=0)
        {
           g+=n;
        }
    }
    return g;
}
int main()
{
    printf("%d\n",fun(3,9,3));
    printf("%d",fun(1,4,2));
    return 0;
}
