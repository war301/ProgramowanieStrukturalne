#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float del;
    del=b*b-4*a*c;

    if(a!=0){
        if(del>0){
            printf("%f,%f",(-b-(sqrt(del)))/(2*a),(-b+sqrt(del))/(2*a));
        }
        if(del==0){
            printf("%f",-b/(2*a));
        }
        if(del<0){
            printf("brak rozwiazan");
        }
    }
    else{
        if(b!=0){
            printf("%f",-c/b);
        }
        else{
            if(c!=0){
                printf("nieskonczenie wiele rozwiazan");
            }else{
            printf("brak rozwiazania");
            }
        }
    }
    return 0;
}
