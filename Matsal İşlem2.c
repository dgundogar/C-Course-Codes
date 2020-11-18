#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Turkish");
    int kareninbirkenari ;

    printf("Karenin bir kenarýný girin");

    scanf("%d", &kareninbirkenari );
    printf("Karenin alaný  : %d cm " , kareninbirkenari * kareninbirkenari );

    int dikdortgenkisakenar , dikdortgenuzunkenar ;

    /* printf("kýsa kenarý giriniz...\n");
    scanf("%d", &dikdortgenkisakenar);
    printf("uzun kenarý giriniz...\n");
    scanf("%d", &dikdortgenuzunkenar);

    printf("Dikdortgenin alaný %d cm \n", dikdortgenkisakenar * dikdortgenuzunkenar); */

    printf("Dikdortgenin kisa ve uzun kenarini giriniz.");
    scanf("%d%d", &dikdortgenkisakenar, &dikdortgenuzunkenar);

    printf("Dikdortgenin Alaný %d cm \n", dikdortgenkisakenar * dikdortgenuzunkenar);



    return 0;
}
