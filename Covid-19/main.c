#include <stdio.h>
#include <stdlib.h>

int main(){
  /* char cumle[200];
   printf("Ulke isimlerini ve oranlarini giriniz:");
   scanf("%c",&cumle);
    for(int i=0;i<strlen(cumle);i++){
        if(isdigit(cumle[i])){
            for(int j=0;j<i;j++){
                printf("%c",cumle[j]);
            }
        }
        printf(":%c",cumle[i]);
     }
     x = atoi(s); // stringin icerigini integer’a cevirir
    printf("int: %d\n", x);
*/
int main()
{
    char okunan[1000];
    char ulkeler[50][30];
    int sayilar[50];
    int yazildimi[50]={0};
    int ulkesayisi=0;
    fgets(okunan,1000,stdin);
    int i=0,j;
    while(okunan[i]!='\n'){
        int harfsayisi=0;
        while(okunan[i]>='A' && okunan[i]<='Z'){
            ulkeler[ulkesayisi][harfsayisi]=okunan[i];
            harfsayisi++;
            i++;
        }
        ulkeler[ulkesayisi][harfsayisi]='\0';
        char sayi[5];

        harfsayisi=0;
        while(okunan[i]>='0' && okunan[i]<='9'){
            sayi[harfsayisi]=okunan[i];
            harfsayisi++;
            i++;
        }
        sayilar[ulkesayisi]=atoi(sayi);
        ulkesayisi++;
    }
    int enbuyuk,enbuyukindis;
    for(i=0;i<ulkesayisi;i++){
        enbuyuk=-1;
        for(j=0;j<ulkesayisi;j++){
            if(!yazildimi[j]&&sayilar[j]>enbuyuk){
                enbuyuk=sayilar[j];
                enbuyukindis=j;
            }
        }
        printf("%s %d\n",ulkeler[enbuyukindis],sayilar[enbuyukindis]);
                yazildimi[enbuyukindis]=1;
    }

    return 0;






































 /*char cumle[1000];
    char *cevrilemeyen_kisim;
    double cevrilen_kisim;
    printf("Ulke isimlerini ve oranlarýný giriniz:");
    scanf("%c",&cumle);
     for(int i=0;i<strlen(cumle);i++){
        if(isdigit(cumle[i])){
            for(int j=0;j<i;j++){
                printf("%c",j);
            }
        }
     }
     */
      /*cevrilen_kisim = strtod(cumle, &cevrilemeyen_kisim);
      printf("Çevrilen kýsým: |%f|\n", cevrilen_kisim);
      printf("Çevrilmeyen kýsým: |%s|", cevrilemeyen_kisim);

    */
}

   /*char str[30];
   printf("Ulke isimlerini ve oranlarýný giriniz:");
    scanf("%c",&str);
   char *ptr;
   double ret;

   ret = strtod(str, &ptr);
   printf("The number(double) is %lf\n", ret);
   printf("String part is |%s|", ptr);
   */
  /* int main(void)
{
   char cdizi[] = "Bilgisayar32894";
   char *cp;
   long int ret;

   ret = strtol(cdizi, &cp, 10);
   printf("Sayý deðeri: %ld\n", ret);
   printf("Karakterler: %s", cp);

   return 0;
}

*/













