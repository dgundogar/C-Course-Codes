#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{

    int min,max;
    int *pt;
    int dizi[N];
    printf("Please enter your numbers: \n");

    for (pt=dizi; pt<dizi+N; pt++)
    {

        scanf("%d",pt);
    }
max=min=dizi[0];
    for(pt=dizi+1; pt<dizi+N;pt++)
    {
        if (*pt>max)
        {
            max =*pt;
        }
        if (*pt<min)
        {
            min =*pt;
        }
    }
    printf("%d max sayimizdir\n",max);
    printf("%d min sayimizdir",min);


    return 0;
}
