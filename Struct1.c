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
    /*Bir buz pateni karşılaşmasında,bir yarışmacının performansı 6.00 üzerinden puanlanarak 10 hakem tarafından
    değerlendirilmektedir.Yarışmacının performans puanı ise hakemlerin vermiş olduğu en düşük ve en yüksek puan
    atılıp,geri kalan puanların aritmetik ortlaması alınarak bulunmaktadır.Yazacağınız programda yarışmacının
    adı,soyadı performans puanını hesaplayıp ekranda görüntüleyiniz.Performans hesaplamasını tek parametreli
    bir fonksiyonda yapınız.Bu fonksiyon yarışmacıya ait yapıyı parametre olarak almalı ve performans puanını
    hesaplayarak geri döndürmelidir.*/
    contestant bir;
    printf("please enter the name of the contestant:\n");
    scanf("%s",&bir.name);
    printf("please enter the surname of the contestant: \n");
    scanf("%s",&bir.surname);
    for(int i=0;i<10;i++)
    {
        printf("please enter your score: \n");
        scanf("%f",&bir.puan[i]);
    }
    bir.performans=score(bir);

    printf("performans puani: %f",bir.performans);



    return 0;
}
