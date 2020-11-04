#include <stdio.h>
#include <stdlib.h>

void getnumber()
{
    while(1)
    {
        int number;
        printf("please enter a number: \n");
        scanf("%d",&number);
        if (number < 0 )
        {
            break;
        }

    }
}


int main()
{
    getnumber();
    return 0;
}
