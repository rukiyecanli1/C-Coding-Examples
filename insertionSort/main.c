#include <stdio.h>
void insertionSort(int dizi[],int MAX){
int i,j,deger;
for(i=1;i<MAX;i++){
 deger=dizi[i];   // 8  5 4 3 1
  j=i-1;
 while(j>=0 && dizi[j]>deger){
    dizi[j+1]=dizi[j];
    j--;
}
dizi[j+1]=deger;
   }
 }

void printDizi(int dizi[],int MAX){
int i;
for(i=0;i<MAX;i++)
    printf("%d ",dizi[i]);
      printf("\n");
}
int main(){
int dizi[]={8,5,4,3,1};
int MAX=sizeof(dizi)/sizeof(dizi[0]);
printf("DÝZÝ:            ");
printDizi(dizi,MAX);
insertionSort(dizi,MAX);
printf("Sýralanmis Dizi: ");
printDizi(dizi,MAX);
return 0;
}
