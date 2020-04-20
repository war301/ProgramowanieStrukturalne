#include <stdio.h>
#include <stdlib.h>
double funkcja(int n)
{
    return n;
}
double funkcja1(double (*funkcja2)(int m),int n)
{
    return funkcja2(n);
}
int main()
{
    int n=4;
    printf("%lf",funkcja1(&funkcja,n));
    return 0;
}
