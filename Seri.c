#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n;
    float x,seri;
    char ask;

    do
    {
        printf("Pozitif sayi giriniz:\n");
        scanf("%d",&n);
        printf("Reel sayi : ");
        scanf("%f %c",&x,&ask);

        for(i=1;i<=2*n-1;i+=2)
        {
            seri+=i/pow(x,i+1);
        }

        printf("Seri = %f\n",seri);




    }   while (ask=='E');

    return 0;
}
