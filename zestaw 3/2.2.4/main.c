#include <stdio.h>
#include <stdlib.h>
int potega2(int unsigned n)
{
    int in=1;
    int i=1;
    while(i<=n)
    {
        in=2*in;
        i++;
    }
    return printf("%d",in);
}

int main()
{
    printf("podaj liczbe:");
    int n;
    scanf("%d",&n);
    potega2(n);
    return 0;
}


