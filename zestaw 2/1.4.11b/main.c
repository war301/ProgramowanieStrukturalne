#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    int wy;
    for(int i =0;i<c;i++)
    {
        int n=5*i*i+a*i+b;
        if(n<c)
        {
            wy=i;
        }
    }
    printf("%d",wy);
    return 0;
}
