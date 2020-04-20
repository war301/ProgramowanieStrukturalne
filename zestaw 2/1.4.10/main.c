#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0;
    int unsigned n;
    scanf("%d",&n);
    for(int i =0;i*i<=n;i++)
    {
       s=i;
    }
    printf("%d",s);
    return 0;
}
