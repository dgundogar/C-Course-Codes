#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Lutfen istediginiz metrekareyi giriniz: \n");
    scanf("%d",&a);
    int haliciparasi=200;
    haliciparasi=haliciparasi+(40*a);
    printf("haliciya odenmesi gereken miktar: %d",haliciparasi);

    return 0;
}
