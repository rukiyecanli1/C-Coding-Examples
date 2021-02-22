#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("\nSerinin toplami: %d",seriHesapla(a,b));
}
int seriHesapla(int x,int y)
{
    int toplam=0, z=0;
    printf("Serinin terimleri: ");
    for(int i=1; i<=y; i++)
    {
        printf("%d+",fakt(z));
        toplam=toplam+fakt(z);
        z=z+x;
    }
    return toplam;
}
int fakt(int p)
{
    if(p<=1)
        return 1;
    else
        return p*fakt(p-1);
}

