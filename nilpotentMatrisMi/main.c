#include <stdio.h>
#include <stdlib.h>
int nilpotentMi(int matris[][100],int boyut){
    int sayac,i,j,toplam=0;
    int sonucMatrisi[boyut][boyut];
     for(i = 0;i<boyut;i++){
     for(j=0;j<boyut;j++){
        for(sayac =0; sayac<boyut; sayac++){
           sonucMatrisi[i][j] = matris[i][sayac]*matris[sayac][j] + sonucMatrisi[i][j];
            toplam=toplam+sonucMatrisi[i][j];
            if(toplam==0)
            return 1;
            else
            return 0;
        }
    }
   }

}

int main()
{
int matriss[3][3]={{1,2,5},{2,4,10},{-1,-2,-5}};
if(nilpotentMi(matriss,3)==1)
   printf("nilpotent");
   else
    printf("deðil");

return 0;
}
