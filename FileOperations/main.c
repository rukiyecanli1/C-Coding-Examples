#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dosyaAdi[20];
    printf("Dosya ad� giriniz:");
    scanf("%s",dosyaAdi);
    FILE *filep=fopen(dosyaAdi,"w");
    if(filep==NULL)
      printf("Dosya olu�turulamad�...");
    else
      printf("Dosya olu�turuldu.");
}
