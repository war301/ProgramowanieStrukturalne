#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
    if(n==0 || n==1)
        return 1;
    if(n%2==1)
        return 2*foo(n-1)+6;
    return -foo(n-1)+5;

}
int main()
{
    printf("%d",foo(3));
    return 0;
}
