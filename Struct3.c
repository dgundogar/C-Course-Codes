#include <stdio.h>
#include <stdlib.h>
#define n 30

typedef struct
{
    int school_number;
    char answers[10];


}exam;

typedef struct
{
    int school_number;
    int result;
}result;



int main()
{
    /*Bir ��retmen 30 ki�ilik s�n�fa 10 soruluk �oktan se�meli sorulardan olu�an bir s�nav vermi�tir.
    Bu s�navda her sorunun 4 ��kk�(A B C D) bulunmakta ve 4 yanl�� bir do�ruyu g�t�rmektedir.Bu programda
    bir ��rencinin okul numaras�n� ve cevaplar�n� i�eren bir yap� tan�mlay�n�z ve s�n�fta bulunan her ��rencinin
    okul numaras�n� ve cevaplar�n� bu yap� dizisine okutunuz.Daha sonra ��retmenin haz�rlad��� cevap anahtar�n�
    bir karakter dizisine okuyunuz ve her ��rencinin 10 �zerinden ald��� notu hesaplay�n�z.Her ��rencinin okul numaras�
    ile,hesaplanan s�nav sonucunu bir ba�ka yap� dizisinde tutunuz ve sonu�lar� ekranda g�r�nt�leyiniz.*/

    exam student[30];
    result student[30];
    char cevap_anahtari[10];
    int i,j;
    int correct,not_correct;
    printf("please enter the truth answer: \n");

    for(int i=0;i<10;i++)
    {
        scanf("%s",&cevap_anahtari[i]);
    }
    printf("Student Identity:\n");

    for (j=0;j<n;j++)
    {
        printf("Student Number: \n");
        scanf("%d",&exam[j].school_number);
        correct=not_correct=0;
        printf("Answers: \n");

        for(i=0;i<10;i++)
        {
            printf("Please enter your answer for %d. question:\n",i+1);
            scanf("%s",&exam[j].answers[i]);
            if (exam[j].answers[i]==anahtar[i])
            {
                correct++;
            }
            else
            {
                not_correct++;
            }
        }
        result[j].school_number=exam[j].school_number;
        printf("%d correct, %d false answers\n",correct,not_correct);
        result[j].result=correct-(not_correct/4);

    }
    for(j=0;j<30;j++)
    {
        printf("Student number: %d  /t Grade: %d\n",result[j].school_number,result[j].result);
    }

    return 0;
}
