#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Turkish");
    int kareninbirkenari ;

    printf("Karenin bir kenar�n� girin");

    scanf("%d", &kareninbirkenari );
    printf("Karenin alan�  : %d cm " , kareninbirkenari * kareninbirkenari );

    int dikdortgenkisakenar , dikdortgenuzunkenar ;

    /* printf("k�sa kenar� giriniz...\n");
    scanf("%d", &dikdortgenkisakenar);
    printf("uzun kenar� giriniz...\n");
    scanf("%d", &dikdortgenuzunkenar);

    printf("Dikdortgenin alan� %d cm \n", dikdortgenkisakenar * dikdortgenuzunkenar); */

    printf("Dikdortgenin kisa ve uzun kenarini giriniz.");
    scanf("%d%d", &dikdortgenkisakenar, &dikdortgenuzunkenar);

    printf("Dikdortgenin Alan� %d cm \n", dikdortgenkisakenar * dikdortgenuzunkenar);



    return 0;
}
