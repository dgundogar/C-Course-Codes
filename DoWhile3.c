#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ope;

    printf("please enter + or -:\n");
    scanf("c",&ope);
    int a,b;
    printf("please enter two numbers: \n");
    scanf("%d%d",&a,&b);
    float result=0;

    if ((a!=0)&&(b!=0))
    {
        if (ope == '+')
        {
            result= (float)((1/a) + (1/b));
        }
        else if (ope = 'c')
        {
            result= (float)((1/a) - (1/b));
        }
    }
    else
    {
        printf("we can't make it");
    }


    return 0;

}

