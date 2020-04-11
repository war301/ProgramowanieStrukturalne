#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b;
    char c;
    printf("wybierz operacje :");
    scanf("%c",&c);
    scanf("%f",&a);
    scanf("%f",&b);

    if(c=='+'){
        printf("%f",a+b);
    }
    if(c=='-'){
        printf("%f",a-b);
    }
    if(c=='*'){
        printf("%f",a*b);
    }
    if(c=='/'){
        printf("%f",a/b);
    }
    return 0;
}
