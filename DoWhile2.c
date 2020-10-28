#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    printf("Please enter a positive number: \n");
    scanf("%f",&number);
    float square=0;

    do
    {
        printf("Please enter a positive number: \n");
        scanf("%f",&number);

        if (number == 0)
        {
            break;
        }
        else{
            square = sqrt(number);

        }
    }
    while (number<0);
    printf("%f",square);

    return 0;
}
