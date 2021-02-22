#include <stdio.h>
#include <stdlib.h>
int isItMysteryCluster(int array[]);

void findSubsets(int array[]){


}


int isItMysteryCluster(int array[]){
    int i,mysteryCluster;
    for(i=0;i<strlen(array);i++)
        if(strlen(array)==array[i])
          mysteryCluster++;
    return mysteryCluster;
}

int main()
{
 int array[50];
    int i;
    int elementNumber;
   printf("\nHow many number do you want to enter? :");
   scanf("%d", &elementNumber);
   for (i = 0; i <elementNumber; i++) {
      printf("Enter %d. element: ", i+1);
      scanf("%d", &array[i]);
   }
   printf("array[%d]= ",elementNumber);
   for (i = 0; i < elementNumber; i++)
     printf("%d ",array[i]);
     findSubsets(array);



   return (0);
}
