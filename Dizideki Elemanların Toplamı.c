#include <stdio.h>
#include <stdlib.h>


void toplam (int n,int dizi[])
{
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        sum = sum + dizi[i];
    }
    printf("Dizideki elemanlarin toplami %d dir\n",sum);
}

void carpim(int n,int dizi[])
{
    int carpim = 1;
    for (int i =0; i<n; i++)
    {
        carpim = carpim * dizi[i];
    }
    printf("Dizideki elemanlarin carpimi %d dir\n",carpim);
}

void maxmin(int n,int dizi[])
{
    int max=dizi[0];
    int min=dizi[0];

    for (int i=0; i<n; i++)
    {
        if (dizi[i]>max)
        {
            max = dizi[i];
        }
        if (dizi[i]<min)
        {
            min= dizi[i];
        }
    }
    printf("Dizinin en buyuk degeri %d, en kucuk degeri %d dir\n",max,min);
}

void close(int n, int dizi[])
{
    int rastgele = rand()%100;
    printf("random sayimiz: %d\n",rastgele);
    int fark =abs(rastgele - dizi[0]);
    int fark2=abs(rastgele - dizi[0]);
    int yakin = dizi[0];
    int en_yakin = dizi[0];

    for(int i=0; i<n; i++)
    {
        fark =abs(rastgele - dizi[i]);
        if (fark<fark2)
        {
            fark2 = fark;
            en_yakin=dizi[i];
        }



    }
    printf("Random sayimiza en yakin olan sayi %d'dir",en_yakin);
}



int main()
{
    int n;
    printf("Lutfen dizinin eleman sayisinin kac tane olmasini istediginizi giriniz: \n");
    scanf("%d",&n);

    int dizi[n];
    int i=0;

    while(i<n)
    {
        printf("Lutfen bir tamsayi giriniz: \n");
        scanf("%d",&dizi[i]);
        i++;
    }
    toplam(n,dizi);
    carpim(n,dizi);
    maxmin(n,dizi);
    close(n,dizi);

    return 0;
}
