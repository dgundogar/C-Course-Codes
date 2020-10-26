#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int s;
    s=0;
    printf("please enter a capital letter: \n");
    scanf("%c",&a);


    if (a >= 65 && a <=90)
    {
        s = a + 32;
        printf("your lowercase letter is %c",s);
    }
    else
    {
        printf("please enter a capital letter");
    }





    return 0;
}
