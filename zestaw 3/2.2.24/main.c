#include <stdio.h>
#include <stdlib.h>
 int ciag(int unsigned n)
 {
     if( n==0)
     {
         return 1;
     }
     return 5+2*ciag(n-1);
 }
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",ciag(n));
    return 0;
}
