#include <stdio.h>

   int linear_search(int arr[],int MAX,int search_key){
   int i;
   for(i=0;i<MAX;i++){
     if(arr[i]==search_key)
        return i;
     }
     return 0;
   }
 int main(){
     int arr[]={10,14,19,26,27,31,34};
     int MAX=sizeof(arr)/sizeof(arr[0]);
     int search_key;
     printf("Lütfen bir sayı aratınız:");
     scanf("%d",&search_key);
     int search_key_index=linear_search(arr,MAX,search_key);
     if(search_key_index){
        printf("\n\n%d found at index:%d\n\n",search_key,search_key_index);
     }else{
     printf("\n\%d not found int array\n|n",search_key);
     }
     return 0;
 }



























