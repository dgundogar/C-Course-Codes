#include <stdio.h>
#include <stdlib.h>


typedef union
{
    int x,y;
}integer;

int main()
{
    integer i;
    int a,b;
    int *p;
    int *r;
    printf("Please enter two integers: \n");
    scanf("%d",&i.x);
    scanf("%d",&i.y);
    p = &i.x;
    printf("1. integers place: %d\n",p);
    r = &i.y;
    printf("2. integers place: %d\n ",r);
    return 0;
}
