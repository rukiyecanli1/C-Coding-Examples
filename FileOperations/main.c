#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dosyaAdi[20];
    printf("Dosya adý giriniz:");
    scanf("%s",dosyaAdi);
    FILE *filep=fopen(dosyaAdi,"w");
    if(filep==NULL)
      printf("Dosya oluþturulamadý...");
    else
      printf("Dosya oluþturuldu.");
}
