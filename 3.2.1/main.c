#include <stdio.h>
#include <stdlib.h>
int foo(int*a,int*b)
{
    if(*a>*b)
    {
        return *b;
    }
    return *a;

}
int main()
{
    int x=5,y=7;
    printf("%d",foo(&x,&y));
    return 0;
}
