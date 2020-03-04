#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(a>0 && b>0 && c==0){
        printf("%f",(a*b)/2);
    }
    if(a>0 && b>0 && c>0){
        float p, d;
        p=(a+b+c)/2;
        d= sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%f",d);
    }
    return 0;
}
