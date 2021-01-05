#include <stdio.h>

int _plusone(int n);

int main(int argc,char *argv[])
{
    int x = 3;
    printf("%d + 1 = %d\n",x,_plusone(atoi));

    return 0;
}
