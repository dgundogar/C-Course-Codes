#include <stdio.h>
#include <stdlib.h>

void fibo(int a)
{
    int i=1;
    printf("i");
    while (i<a)
    {
        i+2 = (i+1)+(i);
        printf("%d",i);

    }

}

int main()
{
    int limit;
    printf("please enter a limit value for our fibonacci: \n");
    scanf("%d",&limit);
    return 0;
}
