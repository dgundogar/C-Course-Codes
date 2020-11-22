#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sentence[100];
    char *pt;
    printf("Please enter your sentence: \n");
    gets(sentence);
    int count=0;

    for(pt=sentence;*pt;pt++)
    {
        count= count +1;
    }
    printf("%d",count);

    return 0;
}
