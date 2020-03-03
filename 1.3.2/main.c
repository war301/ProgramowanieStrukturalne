#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        printf("%d",a);
    }
    if(b>a){
        printf("%d",b);
    }
    if(a==b){
        printf("%d",b);
    }
    return 0;
}
