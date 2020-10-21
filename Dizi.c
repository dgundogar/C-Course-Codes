#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ucgen[2];
    int i;
    i = 0;

    while(i<3)
    {
        printf("Ucgenin kenarlarini giriniz: \n");
        scanf("%d",&ucgen[i]);
        i++;
    }
    printf("ucgenin kenarlari %d\t%d\t ve %d\t dir",ucgen[0],ucgen[1],ucgen[2]);
    if (ucgen[0]== ucgen[1] && ucgen[0]==ucgen[2])
    {
        printf("ucgen bir eskenar uçgendir");
    }
    else if (ucgen[0]== ucgen[1] && ucgen[0]!=ucgen[2])
    {
        printf("ucgen ikizgenar ucgendir");
    }
    else if ((ucgen[1]== ucgen[2] && ucgen[1]!=ucgen[0]))
    {
        printf("ucgen ikizgenar ucgendir");
    }
    else if ((ucgen[1]== ucgen[3] && ucgen[1]!=ucgen[2]))
    {
        printf("ucgen ikizgenar ucgendir");
    }
    else
    {
        printf("ucgen çeþitkenar ucgendir");
    }

    return 0;

}
