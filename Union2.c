#include <stdio.h>
#include <stdlib.h>



typedef union
{
    int cevre;
    int alan;
}hesapla;


int main()
{
    int r;
    printf("Lutfen yaricapi giriniz: ");
    scanf("%d",&r);
    hesapla daire;
    daire.cevre=2*3*r;
    printf("Dairenin cevresi: %d\n",daire.cevre);
    daire.alan=3*r*r;
    printf("Dairenin alani: %d\n",daire.alan);

    return 0;
}
