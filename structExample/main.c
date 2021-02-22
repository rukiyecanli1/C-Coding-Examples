#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Kimlik{
    char isim[100];
    int gun;
    int ay;
    int yil;
};
int kucuguBul(struct Kimlik Kisi[]){
    int enk= Kisi[1].yil*365+Kisi[1].ay*30+Kisi[1].gun;
       for(int i=2;i<=strlen(Kisi);i++){
         if( Kisi[i].yil*365+Kisi[i].ay*30+Kisi[i].gun<enk){
            enk=Kisi[i].yil*365+Kisi[i].ay*30+Kisi[i].gun;
           return i;
         }
       }
    }

int main()
{
   int sayi;
   printf("Kisi sayisini giriniz:");
   scanf("%d",&sayi);
   struct  Kimlik kimlik_dizisi[sayi];
     for(int i=1;i<=sayi;i++){
       printf("%d. kisinin ismini giriniz:",i);
       scanf("%s",&kimlik_dizisi[i].isim);
       printf("%d. kisinin dogum tarihini giriniz:\n",i);
       printf("Gun:");scanf("%d",&kimlik_dizisi[i].gun);
       printf("Ay:"); scanf("%d",&kimlik_dizisi[i].ay);
       printf("Yil:");scanf("%d",&kimlik_dizisi[i].yil);
       printf("\n");
   }
   printf("Kisi Bilgileri\n");
   printf("-----------------------------------\n");
     for(int j=1;j<=sayi;j++){
        printf("%s - %d / %d / %d\n",kimlik_dizisi[j].isim,kimlik_dizisi[j].gun,kimlik_dizisi[j].ay,kimlik_dizisi[j].yil);
     }
   printf("-----------------------------------\n\n");

    int enKucuk=kucuguBul(kimlik_dizisi);
    printf("En Kucuk Kisinin Ismi: %s\n\n",kimlik_dizisi[enKucuk].isim);
    printf("En kucuk Kisinin Dogum Tarihi: %d / %d / %d",kimlik_dizisi[enKucuk].gun,kimlik_dizisi[enKucuk].ay,kimlik_dizisi[enKucuk].yil);
}


