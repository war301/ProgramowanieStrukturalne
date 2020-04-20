#include <stdio.h>
#include <stdlib.h>

void zliczanie()
{
    static int x =0;
    x++;
    printf("liczba wywolan: %d\n",x);
}
int main()
{
    zliczanie();
    zliczanie();
    zliczanie();
    return 0;
}
