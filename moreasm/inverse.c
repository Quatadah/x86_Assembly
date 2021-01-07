#include <stdio.h>
#include <stdlib.h>

void _inverse(long long int tab[],int len);

int main()
{
    long long int tab[10];
    for(int i = 0;i<10;i++)
    {
        tab[i] = i+1;
    }
    printf("before ...\n");

    for(int i=0;i<10;i++)
    {
        printf("tab[%d] = %lld\n",i,tab[i]);
    }

    printf("after ...\n");
    _inverse(tab,10);
    for(int i=0;i<10;i++)
    {
        printf("tab[%d] = %lld\n",i,tab[i]);
    }
    return 0;
}