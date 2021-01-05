#include <stdio.h>
#include <stdlib.h>

int _fact(int n);

int main()
{
    int n = 5;
    printf("%d! = %d\n",n,_fact(n));

    return 0;
}