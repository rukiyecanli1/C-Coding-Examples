#include <stdio.h>
#include <stdlib.h>

int main(){
    char dogru[5];
    char cevap[5];
    printf("Dogru cevaplarý giriniz:");
    scanf("%30s",dogru);
    printf("Ogrencinin cevaplarýný giriniz:");
    scanf("%30s",cevap);
    printf("Puan: %d",PuanHesapla(dogru,cevap));
}
int PuanHesapla(char *dogru,char *cevap){
    int dogruSayisi=0,puan;
    for(int i=0;i<5;i++){
        if(dogru[i]==cevap[i]){
         dogruSayisi++;
        }
         puan=(dogruSayisi/5)*100;
    }

    return puan;
}
