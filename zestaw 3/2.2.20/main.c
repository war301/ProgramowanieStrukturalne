#include <stdio.h>
#include <stdlib.h>
int rekurencja(int n)
{
   static int a=1;

   if(n==0 && a==1 ){
        return printf("1");
   }
   a=n*a;
   if(n==1){
    printf("%d",a);
   }
    return rekurencja(n-1);
}
int main()
{
    printf("podaj liczbe silnii:");
    int n;
    scanf("%d",&n);
    rekurencja(n);
    return 0;
}
