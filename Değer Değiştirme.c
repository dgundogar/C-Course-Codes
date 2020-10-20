#include <stdio.h>
#include <stdlib.h>
void switcher(int a, int b)
{
    int temp;

    temp=a;
    a = b;
    b = temp;

    printf("after switch: a = %d, b=%d",a,b);

}


int main()
{
    int a,b;
    printf("please enter two numbers: \n");
    scanf("%d%d",&a,&b);
    printf("a = %d, b= %d\n",a,b);

    switcher(a,b);
    return 0;



}
