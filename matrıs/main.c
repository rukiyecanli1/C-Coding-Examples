#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   int matris[3][3]={{1,2,3},
                     {4,5,6},
                     {7,8,9}};
     for(i=0;i<3;i++){
       for(j=0;j<3;j++){

           printf("%d  ",matris[i][j]);
        }
      printf("\n");
     }
   printf("\n");

     int N,M;
     printf("Lütfen matrisin satýr sayýsýný giriniz:");
     scanf("%d",&N);
     printf("Lütfen matrisin sutun sayýsýný giriniz:");

     scanf("%d",&M);
      int matriss[N][M];
      for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
         printf("Martis[%d][%d] giriniz:",i,j);
         scanf("%d",&matriss[i][j]);
        }
      }
       printf("\n");
      for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%d ",matriss[i][j]);
        }
        printf("\n");
      }
   printf("\n");
   printf("......YENÝ MATRÝS.......");
   printf("\n");
   for(i=0;i<N;i++){
    for(j=0;j<M;j++){
      int cevap=matris[i][j]*matriss[j][i]+;
    printf("%d ",cevap);
    }
    printf("\n");
   }
    return 0;
}
