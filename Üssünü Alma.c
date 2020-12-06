#include <stdio.h>
#include <stdlib.h>

void ustunu_al(int x,int y,int *r)
{

    *r =1;
    for (int i= 0;i<y; i++)
    {
        *r = *r * x;
    }

}

int main()
{
    int x,y;
    int myresult;
    printf("please enter two numbers: \n ");
    scanf("%d%d",&x,&y);
    ustunu_al(x,y,&myresult);

    printf("Our result is %d",myresult);
    return 0;
}
