#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("liczba n!:");
    scanf("%d",&n);
    int b=1;
    for(int i=1;i<=n;i++)
    {
       b = b*i;
    }
    printf("%d",b);
    return 0;
}
