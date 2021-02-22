#include <stdio.h>
#include <stdlib.h>
int karakterSayisi(char *cumle);

int main(){
    char cumle[1000];
    printf("Cumle giriniz:");
    gets(cumle);
    /*printf("%c\n",cumle[0]);
    int j;
    for(j=1;j<10;j++){
       if(cumle[j]=='\0'){
       printf("%c\n",cumle[j+1]);
       }
    }
    */
    int i;
    for(i=0; i<karakterSayisi(cumle); i++){
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
    int i ;
    for (i = 0 ; cumle[i]!= '\0' ; i++){
    }
    return i;
}

/*Hayýrlý Ramazanlar...*/
