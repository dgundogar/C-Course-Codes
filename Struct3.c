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
    /*Bir öðretmen 30 kiþilik sýnýfa 10 soruluk çoktan seçmeli sorulardan oluþan bir sýnav vermiþtir.
    Bu sýnavda her sorunun 4 þýkký(A B C D) bulunmakta ve 4 yanlýþ bir doðruyu götürmektedir.Bu programda
    bir öðrencinin okul numarasýný ve cevaplarýný içeren bir yapý tanýmlayýnýz ve sýnýfta bulunan her öðrencinin
    okul numarasýný ve cevaplarýný bu yapý dizisine okutunuz.Daha sonra öðretmenin hazýrladýðý cevap anahtarýný
    bir karakter dizisine okuyunuz ve her öðrencinin 10 üzerinden aldýðý notu hesaplayýnýz.Her öðrencinin okul numarasý
    ile,hesaplanan sýnav sonucunu bir baþka yapý dizisinde tutunuz ve sonuçlarý ekranda görüntüleyiniz.*/

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
