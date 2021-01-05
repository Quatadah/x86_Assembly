#include <stdio.h>
#include <stdlib.h>

int _fact(int n);

int main()
{
    int n = 4;
    printf("%d! = %d\n",n,_fact(n));

    return 0;
}