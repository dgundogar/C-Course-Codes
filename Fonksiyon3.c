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
    int a;
    printf("please enter a number :\n");
    scanf("%d",&a);
    printf("this numbers factorial is %d",fac(a));

    return 0;
}
