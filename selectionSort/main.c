#include <stdio.h>
#include <stdlib.h>
int selectionSort(int dizi[],int N);

int selectionSort(int dizi[],int N){
    for(int i=0;i<N-1;i++){
        int enk=i;
      for(int j=i+1;j<N;j++){
        if(dizi[j]<dizi[enk])
            enk=j;
      }
      int temp=dizi[i];
      dizi[i]=dizi[enk];
      dizi[enk]=temp;
    }

}
int main()
{
    int A[10]={1,5,4,3,7,6,9,0,1,2};
    selectionSort(A,10);
    for(int i=0;i<10;i++)
        printf("%d",A[i]);
}
