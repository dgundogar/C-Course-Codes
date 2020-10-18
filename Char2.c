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
        count ++;
        i++;
    }
    printf("%d",count);
    return 0;
}
