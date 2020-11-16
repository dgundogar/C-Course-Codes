#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int m;
    printf("please enter your code: \n");
    scanf("%c",&c);
    printf("please enter your m^2: \n");
    scanf("%d",&m);
    if (c=='T')
    {
        printf("%d",(18*m));
    }
    if (c=='B')
    {
        printf("%d",(17*m));
    }

    if (c=='S')
    {
        printf("%d",(19*m));
    }



}
