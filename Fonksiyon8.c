#include <stdio.h>
#include <stdlib.h>

int siralama(int a,int b)
{
    if(a>b)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int a,b;
    printf("please enter two numbers: \n");
    scanf("%d%d",&a,&b);
    int sonuc;

    sonuc = siralama(a,b);
    if (sonuc == 1)
    {
        printf("%d is bigger than %d",a,b);
    }
    else{
        printf("%d is bigger than %d",b,a);
    }
    return 0;

}
