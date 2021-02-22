#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int dizi[],int N){
    for(int i=0;i<N-1;i++)
        for(int j=0;j<N-1-i;j++)
          if(dizi[j]>dizi[j+1]){
            int temp=dizi[j];
             dizi[j]=dizi[j+1];
             dizi[j+1]=temp;

    }
}
int main()
{
    int dizi[6]={1,2,80,7,6,9};
    bubbleSort(dizi,6);
     for(int i=0;i<6;i++)
        printf("%d ",dizi[i]);

        int a=1;
        int b=20;

        if(a=10){
            if(b==20)
                printf("*** ");
            else
                printf("*****");
        }

        int s=10;
        while(s--)
            printf("%d",s);

            printf("\n");
            int sayilar[3]={1,2,3};
            printf("%d",sayilar[1]);
            printf("\n");
            char sehir[6]={'a','n','k','a','r','a'};
            printf("%s\n",sehir);
            printf("%d",sehir);
           // String i="ali";
          //  printf("%s",i);
printf("\n");


           char sehirrrr[3][9]; //2 boyutlu dizi gibi düþünün ilk matrise sehir sayýsý 2.matrise sehrin harf boyutu girildi.
  int i,j;
    for(i=0;i<3;i++){
      printf("sehir giriniz:\n");
      scanf("%s",&sehirrrr[i]);
  }
    for(j=0;j<3;j++){
      printf("girdiginiz sehirler :   %s\n",sehirrrr[j]);
}

}


