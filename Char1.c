#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    printf("Lutfen bir cumle giriniz:\n");
    gets(cumle);
    int count = 0;
    int i = 0;

    while (cumle[i])
    {
        if (cumle[i] == 32)
        {
            count=count+1;
        }


        i++;
    }
    printf("%d",count+1);
    return 0;
}
