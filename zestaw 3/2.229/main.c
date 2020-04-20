#include <stdio.h>
#include <stdlib.h>
int eukl(int n, int m)//5//20 //20//5 //5//0
{
    if(m!=0)//0
    	return eukl(m,n%m);//20//5 //5//0
    return n;//5
}
int main()
{
    int n;
    int m;
    printf("podaj liczbe n:");
    scanf("%d",&n);
    printf("podaj liczbe m:");
    scanf("%d",&m);
    printf("%d",eukl(n,m));
    return 0;
}
