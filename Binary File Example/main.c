#include <stdio.h>
#include <stdlib.h>
#define DOSYA_YOLU "kayit.txt"
struct Ogrenci
{
char no[10];
char ad[20];
char soyad[20];
int not;
};
void KayitEkle(struct Ogrenci ogr)
{
FILE * dosya;
if ((dosya = fopen(DOSYA_YOLU, "a")) == NULL)
{
printf("dosya acilamadi!\n");
exit(1);
}
fwrite(&ogr, sizeof(struct Ogrenci), 1, dosya);
fclose(dosya);
}

void listele()
{
FILE * dosya;
// dosyayi okuma modunda ac
if ((dosya = fopen(DOSYA_YOLU, "r")) == NULL)
{
printf("dosya acilamadi!\n");
exit(1);
}
printf("\nliste:\n");
while (1)
{
struct Ogrenci ogrenci;
size_t sayi = fread(&ogrenci, sizeof(struct Ogrenci), 1, dosya);
if (sayi < 1) break;
printf("%s %s %s %d\n", ogrenci.no, ogrenci.ad, ogrenci.soyad, ogrenci.not);
}
fclose(dosya);
}
void KayitlariSil()
{
FILE * dosya; // dosyayi yazma modunda ac
if ((dosya = fopen(DOSYA_YOLU, "w")) == NULL)
{
printf("dosya acilamadi!\n");
exit(1);
} // kapat
fclose(dosya);
}

