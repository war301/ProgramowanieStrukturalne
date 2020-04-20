#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(a<0)
    {
        a=a*-1;
    }
    for(int i=0;i<d;i++)
    {
        int n = a*i*i+b*i+c ;
        if(n > d)
        {
            printf("%d",i);
        return i;
        }
    }

    return 0;
}
