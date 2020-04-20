#include <stdio.h>
#include <stdlib.h>
int pierwiastek(int unsigned n)
{
   int s =0;
   for(int i =0;i*i<=n;i++)
   {
       s=i;
   }
    return printf("%d",s);
}
int main()
{
    printf("podaj liczbe:");
    int n;
    scanf("%d",&n);
    pierwiastek(n);
    return 0;
}
