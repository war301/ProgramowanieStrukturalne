#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[7] = {2,-3,8,9,0,8,1};
    int ile =0;
    for(int i=0;i<7;i+=2)
    {
        if(tab[i]%2==0)
            ile++;
    }
    printf("%d",ile);
    return 0;
}
