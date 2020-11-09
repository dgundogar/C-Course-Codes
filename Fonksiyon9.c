#include <stdio.h>
#include <stdlib.h>

int tekmiciftmi(int n)
{
    if ((n%2)== 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a;
    int sonuc;
    printf("please enter a number: \n");
    scanf("%d",a);
    sonuc = tekmiciftmi(a);

    if(sonuc == 1)
    {
        printf("%d bir cift sayidir",a);
    }
    else
    {
        printf("%d bir tek sayidir",a);
    }
    return 0;
}
