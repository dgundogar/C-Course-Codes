#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    char name[20];
    char surname[20];
    float puan[10], performans;


}contestant;

float score (contestant one)
{
    int i;
    float max,min;
    float ortalama=0;
    max=0.00;
    min=6.00;

    for(i=0;i<10;i++)
    {
        if (one.puan[i]>max)
        {
            max=one.puan[i];
        }
        if (one.puan[i]<min)
        {
            min = one.puan[i];
        }
        ortalama= ortalama+one.puan[i];
    }
    ortalama-=min;
    ortalama-=max;
    ortalama=ortalama/8;

    return ortalama;

}

int main()
{

    contestant bir[100];
    int n;
    int birinci=0;
    int j,i;
    char satir;
    float max=0.0;
    printf("Please enter how many competitors there are:\n");
    scanf("%d",&n);
    scanf("%c",&satir);


    for (j=0;j<n;j++)
    {
        printf("please enter the name of the contestant: \n");
        gets(bir[j].name);

        printf("please enter the surname of the contestant: \n");
        gets(bir[j].surname);

        printf("score is: \n");

        for(i=0;i<10;i++)
        {
            scanf("%f",&bir[j].puan[i]);
        }
        scanf("%c",&satir);


        bir[j].performans=score(bir[j]);

        printf("the competitors score is:%f",bir[j].performans);


        if(bir[j].performans>max)
        {
            max=bir[j].performans;
            birinci=j;
        }

    }
    printf("The Winner Is: \n");
    printf("%s %s and winners score is %f",bir[birinci].name,bir[birinci].surname,bir[birinci].performans);

    return 0;
}
