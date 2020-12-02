#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personel
{
    int sifre;
    char ad[10];
    char soyad[10];
    int yas;
    float maas;
    char cinsiyet[10];

}kisiler;

void sirala(kisiler x[],int m)
{
    int i,j;
    kisiler t;//temple ayný þey yerlerini degistirmek için koyduk.

    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if (strcmp(x[i].ad,x[j].ad)>0)
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }

    }
}

void listele(kisiler x[],int m)
{
    int i;
    for(i=0;i<m;i++)
    {
         printf("%d %s %s %d %f %s\n",x[i].sifre,x[i].ad,x[i].soyad,x[i].yas,x[i].maas,x[i].cinsiyet);
    }
}


int main()
{
    int n;
    printf("kac kisi oldugunu giriniz: \n");
    scanf("%d",&n);
    kisiler x[n];
    int i;


    for(i=0;i<n;i++)
    {
        printf("sifreniz: \n");
        scanf("%d",&x[i].sifre);

        printf("adiniz: \n");
        scanf("%s",&x[i].ad);


        printf("soyadiniz: \n");
        scanf("%s",&x[i].soyad);

        printf("yasiniz: \n");
        scanf("%d",&x[i].yas);

        printf("maasiniz: \n");
        scanf("%d",&x[i].maas);

        printf("cinsiyetiniz: \n");
        scanf("%s",&x[i].cinsiyet);

    }

    sirala(x,n);
    listele(x,n);

    return 0;
}
