#include <stdio.h>
#include <stdlib.h>

float isle(float a, float b, char islem)
{
    if  (islem == '+')
    {
        return a+b;
    }
    else if (islem == '/')
    {
        return a/b;
    }
    else if (islem == '-')
    {
        return a - b;
    }
    else
    {
        return a*b;
    }
}


int main()
{
    char islem;
    printf("please enter what to do with those numbers: \n");
    scanf("%c",&islem);
    int a,b;
    printf("please enter two values: \n");
    scanf("%d%d",&a,&b);
    printf("your result is %f",isle(a,b,islem));

}
