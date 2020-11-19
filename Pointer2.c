#include <stdio.h>
#include <stdlib.h>

int faktoriyel( int *sayi)
{
    int sonuc=1;

    for (int i=1;i<=*sayi;i++)
    {
        sonuc *= i;
    }
    return sonuc;

}

int main()
{
    int N,originalnumber;
    printf("Faktoriyelinin alinmasini istediginiz sayiyi girniiz: \n");
    scanf("%d",&N);
    originalnumber=N;
    printf("%d!=%d",originalnumber,faktoriyel(&N));
    return 0;
}
