#include <stdio.h>
#include <stdlib.h>

int silnia(int unsigned n)
{
    int b=1;
    for(int i=1;i<=n;i++)
    {
       b = b*i;
    }
    return printf("%d",b);
}


int main()
{
    printf("podaj liczbe:");
    int n;
    scanf("%d",&n);
    silnia(n);
}
