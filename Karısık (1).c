#include <stdio.h>
#include <stdlib.h>

void degeralma (int matris[3][2])
{
    int i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("elemani giriniz: \n");
            scanf("%d",&matris[i][j]);
        }
    }

}
void tablo(int matris[3][2])
{
    int i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d",matris[i][j]);
        }
        printf("\n");
    }
}

void maxmin(int matris[3][2],int *a,int *b,int *c)
{
    int i,j;
    *a = matris[0][0];
    *b = matris[0][0];
    *c=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            if (*a < matris[i][j])
            {
                *a = matris[i][j];
            }
            if (*b > matris[i][j])
            {
                *b = matris[i][j];
            }
            *c= *c+matris[i][j];
        }
    }


}


int main()
{
    int matris[3][2];
    int *a,*b,*c;
    printf("matrisimizi olusturuyoruz \n");
    degeralma(matris);
    tablo(matris);
    maxmin(matris,&a,&b,&c);
    printf("Max sayi: %d\n",a);
    printf("Min sayi: %d\n",b);
    printf("Elemanlarin toplami: %d\n",c);


    return 0;
}
