#include <stdio.h>
#include <stdlib.h>

int min = 1;
int max = 0;

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
    printf("int type's interval : [%d,%d]\n",min,max);
    return 0;
}

/*
    NOTE : 
    the command time ./a.out returns real	0m8,388s
*/