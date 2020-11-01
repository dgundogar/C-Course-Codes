#include <stdio.h>
#include <stdlib.h>

int us(int a,int b)
{
    int ustu = a;
    for(int i = 1; i<b;i++)
    {
        ustu=ustu*a;
    }
    return ustu;
}

int main()
{
    int a,b;
    printf("please enter taban a and us b: \n");
    scanf("%d%d",&a,&b);

    printf("your result is %d",us(a,b));
}
