#include <stdio.h>
#include <stdlib.h>
int faktoriyel(int sayi)
{
    if(sayi<=1)
        return 1;
    else
        return sayi*faktoriyel(sayi-1);
}
int main()
{
    int a;
    printf("Bir sayi giriniz:");
    scanf("%d",&a);
    printf("%d'nin faktoriyeli:%d",a,faktoriyel(a));
}
