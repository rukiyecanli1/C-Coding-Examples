#include <stdio.h>
void selectionSort(int dizi[],int MAX){
int i,j,enk;
  for(i=0;i<MAX-1;i++){
    enk=i;
      for(j=i+1;j<MAX;j++){
          if(dizi[j]<dizi[enk])
            enk=j;
      }
      int temp=dizi[enk];
      dizi[enk]=dizi[i];

      dizi[i]=temp;

  }
}
int main(){
int dizi[]={64,25,12,22,11};
int MAX=sizeof(dizi)/sizeof(dizi[0]);
selectionSort(dizi,MAX);
printf("Siralanmis Dizi:");
 for(int i=0;i<MAX;i++)
    printf("%d ",dizi[i]);
    return 0;
}


 int temp=dizi[enk];
      dizi[enk]=dizi[i];
      dizi[i]=temp;

void swap(int x,int y){
int temp=x;
       x=y;
       y=temp;
}
void swap(int *x,int *y){
int temp=*x;
       *x=*y;
       *y=temp;
}
swap(&dizi[i],&dizi[enk]);