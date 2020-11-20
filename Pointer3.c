#include <stdio.h>
#include <stdlib.h>

void switcher(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

int main()
{
    int a,b;
    printf("Please enter two numbers: \n");
    scanf("%d%d",&a,&b);
    printf("Before Change a=%d, b=%d",a,b);
    switcher(&a,&b);
    printf("After Change a=%d, b=%d",a,b);

    return 0;
}
