#include <stdio.h>
void swap(int *x,int *y){
int temp=*x;
      *x=*y;
      *y=temp;
  }
void bubbleSort(int dizi[],int MAX){
int i,j;
for(i=0;i<MAX-1;i++){
  for(j=0;j<MAX-1-i;j++){
    if(dizi[j]>dizi[j+1]){
        swap(&dizi[j],&dizi[j+1]);
    }
  }
}
}
void printDizi(int dizi[],int MAX){
 int i;
for(i=0;i<MAX;i++)
printf("%d ",dizi[i]);
printf("\n");
}
int main(){
int dizi[]={14,27,33,10,35};
int MAX=sizeof(dizi)/sizeof(dizi[0]);
printf("dizi:            ");
printDizi(dizi,MAX);
bubbleSort(dizi,MAX);
printf("Siralanmis Dizi: ");
printDizi(dizi,MAX);
return 0;
}
