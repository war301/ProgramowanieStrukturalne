#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("liczba :");
    scanf("%d",&n);
    printf("ilosc wielokrotnosci :");
    scanf("%d",&m);
    int i=1;
     while(i <= m){
        printf("%d\n",n*i);
        i+=1;
       }
       return 0;
}
