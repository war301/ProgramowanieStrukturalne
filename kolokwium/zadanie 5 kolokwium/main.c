#include <stdio.h>
#include <stdlib.h>
int rek(int unsigned n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(n==3*n)
    {
        return rek(n);
    }
    if(n==(3*n+1))
    {
        return rek(3*n)+1;
    }
    if(n==(3*n+2))
    {
        return rek(3*n+1)+2;
    }
}
int main()
{
    printf("%d",rek(4));
    printf("%d",rek(2));
    return 0;
}
