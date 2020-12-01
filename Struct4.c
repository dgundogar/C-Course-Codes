#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char ad[10];
    char soyad[10];
    char tel;
    char adres[20];
    char posta_kodu;

}adres_defteri;

int main()
{
    int n;
    printf("kac kisi oldugunu giriniz: \n");
    scanf("%d",&n);
    adres_defteri person[n];
    char satir;
    scanf("%c",&satir);



    for(int i=0;i<n;i++)
    {
        printf("ad:\n");
        gets(person[i].ad);
        printf("soyad:\n");
        gets(person[i].soyad);
        printf("tel no: \n");
        gets(person[i].tel);
        printf("adres: \n");
        gets(person[i].adres);
        printf("posta kodu: \n");
        gets(person[i].posta_kodu);


    }
    for(int i=0;i<n;i++)
        {
            printf("Kisinin bilgileri: \n");
            printf("ad: %s soyad: %s tel no:%s  adres: %s  posta kodu: %s",person[i].ad,person[i].soyad,person[i].tel,person[i].adres,person[i].posta_kodu);

        }


    return 0;
}
