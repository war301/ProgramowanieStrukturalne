#include <stdio.h>
#include <stdlib.h>
int pierwiastek(int n,int m)
{
   int s =0;
   for(int i =0;potega(i,m)<=n;i++)
   {
       s=i;
   }
    return s;
}
int potega(int n,int m)
{
    int w=1;
    for(int i =1;i<=m;i++)
    {
        w*=n;
    }
    return w;
}
int suma(int n,int m)
{
    int wynik=0;
    for(int i =0;i<=n;i++)
    {
       wynik=wynik+pierwiastek(i,m);
    }
    return printf("%d",wynik);
}
int main()
{
    int n;
    int m;
    printf("podaj dlugosc ciagu:");
    scanf("%d",&n);
    printf("podaj stopien pierwiastka:");
    scanf("%d",&m);
    suma(n,m);
    return 0;
}
