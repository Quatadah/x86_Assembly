#include <stdio.h>
#include <stdlib.h>

/*
    S_{n} = 2 * S_{n-1} + 1 
    S_{0} = 1

*/

float Sn(int n)
{
    if (n==0)
        return 1;
    else
        return 2 * Sn(n-1) + 1 ;
}


double Sn2(int n)
{
    if (n==0)
        return 1;
    else
        return 2 * Sn(n-1) + 1 ;
}

int main()
{
    for(int i = 0; i <= 128 ;i ++)
        printf("S_{%d} = %f \n",i,Sn(i));
        //printf("Hello world !");
        //Overflow for n>= 127 because of exp = 127+127 = 254 which is close to infinite.
        //After n=23, the output becomes pair because the last digit "1" of the binary form is 
        // not taken anymore (memory excess).
    return 0;
}

