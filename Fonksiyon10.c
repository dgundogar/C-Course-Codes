#include <stdio.h>
#include <stdlib.h>

void tek(int a)
{
    int i = 0;
    while(i<=a)
    {
        if ((i%2)==1)
        {
            printf("%d\n",i);
        }
        i++;
    }
}

int main()
{
    int number;
    printf("please enter a value: \n");
    scanf("%d",&number);
    tek(number);

    return 0;
}
