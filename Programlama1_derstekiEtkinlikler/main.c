#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;sayi1,fkt=1;
    printf("Fakt�riyeli al�ncak say�y� giriniz:");
    scanf("%d",&sayi1);
    while(i<sayi1){
         fkt=fkt*i;
         i++;
    }
 printf("Faktoriyel=",fkt);
    return 0;



}
