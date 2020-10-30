#include <stdio.h>
#include <stdlib.h>

// klavyeden girilen iki tamsayýnýn toplamýný hesaplayan fonk

int toplam(int a, int b)
{
    return a+b;
}

int main()
{
    int a,b;
    printf("please enter the first value for addition: \n");
    scanf("%d",&a);
    printf("please enter the second value for addition: \n");
    scanf("%d",&b);
    printf("sum is %d",toplam(a,b));

    return 0;
}
