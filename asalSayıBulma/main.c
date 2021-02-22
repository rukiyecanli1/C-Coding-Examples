
#include <stdio.h>
int main(){
int sayi,sayac;
printf("sayiyi gir\n");
scanf("%d",&sayi);
  for(sayac=2;sayac<sayi;sayac++){
      if(sayi%sayac==0)
        sayac=sayi+1;
     }
  if(sayac>sayi)
    printf("sayimiz asal degildir.");
  else
    printf("sayimiz asaldir.");

}
