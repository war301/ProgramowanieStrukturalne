#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("liczba n :");
    scanf("%d",&n);
    if(n>2){
        if(n%2==0){
            int ij=1;
            int i=1;
            int j=0;
             while(i<=n)
             {
                j=j+2;//2//4//6
                ij=ij*j;//2//8//48
                i+=2;//3//5//7
              }
              printf("%d",ij);
             }
        else
            {
             int ij=1;
             int i=2;
             int j=0;
             while(i<=n)
             {
                j=j+2;//2//4//6//8
                ij=ij*j;//2//8//48

                i+=2;//4//6//
              }

              printf("%d",ij);
            }
    }
    return 0;
}
