#include <stdio.h>
#include <stdlib.h>

int perfectnumber(int a)
{
    int toplam = 0;
    for(int i = 1; i < a; i++)
        if((a%i)==0)
        {
            toplam = toplam + i;
        }
        if (toplam == a)
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
    printf("please enter a number: \n");
    scanf("%d",&a);
    int sonuc= perfectnumber(a);
    if(sonuc == 1)
    {
        printf("%d is a perfect number",a);
    }
    else
    {
        printf("your number isn't perfect");
    }
    return 0;
}
