#include <stdio.h>
#include <stdlib.h>
int karakterSayisi(char *cumle);

int main(){
    char cumle[100];
    printf("Cumle giriniz:");
    gets(cumle);
    int i;
    for(i=0;i<karakterSayisi(cumle);i++){
        if(i==0){
           printf("%c\n",cumle[0]);
        }
        if(cumle[i]==' '){
           printf("%c\n",cumle[i+1]);
        }
    }
    return 0;
}
int karakterSayisi(char *cumle){
    int i;
    for (i = 0;cumle[i]!='\0';i++){
    }
    return i;
 }

 /*Hayýrlý Ramazanlar...*/
