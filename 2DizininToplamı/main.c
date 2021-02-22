#include <stdio.h>
#include <stdlib.h>

int main()
{

   int dizi1[]={1,2,3,4,5};
   int dizi2[]={6,7,8,9,0};
    int dizi3[5];
    for(int i=0;i<5;i++){
        dizi3[i]=dizi1[i]+dizi2[i];
         printf("%d ",dizi3[i]);
    }
}
