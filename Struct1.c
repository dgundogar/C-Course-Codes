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
    /*Bir buz pateni kar��la�mas�nda,bir yar��mac�n�n performans� 6.00 �zerinden puanlanarak 10 hakem taraf�ndan
    de�erlendirilmektedir.Yar��mac�n�n performans puan� ise hakemlerin vermi� oldu�u en d���k ve en y�ksek puan
    at�l�p,geri kalan puanlar�n aritmetik ortlamas� al�narak bulunmaktad�r.Yazaca��n�z programda yar��mac�n�n
    ad�,soyad� performans puan�n� hesaplay�p ekranda g�r�nt�leyiniz.Performans hesaplamas�n� tek parametreli
    bir fonksiyonda yap�n�z.Bu fonksiyon yar��mac�ya ait yap�y� parametre olarak almal� ve performans puan�n�
    hesaplayarak geri d�nd�rmelidir.*/
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
