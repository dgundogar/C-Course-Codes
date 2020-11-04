#include <stdio.h>
#include <stdlib.h>

int fac(int a)
{
    int factorial=1;
    for (int i=1; i<=a;i++)
    {
        factorial= factorial*i;
    }
    return factorial;
}

int main()
{

    for (int i = 1; i<= 10; i++)
    {
        printf("factorial of %d is %d\n",i,fac(i));
    }
    return 0;
}
