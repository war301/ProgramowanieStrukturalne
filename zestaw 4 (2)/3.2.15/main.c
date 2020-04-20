#include <stdio.h>
#include <stdlib.h>
void funkcja(int const *n,int* m)
{
    *m=*n;

}
int main()
{
    int n=4,m=8;
    funkcja(&n,&m);
    printf("%d %d",n,m);
    return 0;
}
