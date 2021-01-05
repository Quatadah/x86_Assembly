#include <stdio.h>
#include <stdlib.h>

// A program that returns char "type" interval limits.

char min = 1;
char max = 0;

void limits()
{
    while(min>=0)
    {
        min++;
        max++;
    }
}

int main()
{
    limits();
    printf("char type's interval is [%d,%d] \n",min,max);
    return 0;
}
