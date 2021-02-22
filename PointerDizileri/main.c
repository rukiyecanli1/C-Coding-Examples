#include <stdio.h>
#include <stdlib.h>
char *dayName(char *dayArray[],int length,int whichDay){
    if(whichDay>=lenght && whichDay<=length){
       return dayArray[whichDay-1];
    }
    else{
        return NULL;
    }

}
int main()
{
    char *days[7]={"mon","tue","wed","thr","fr","st","son"};
    char *p=dayName(days,7,5);
     if(p==NULL){
        printf("NULL");
     }
     else{
    printf("%s",p);
     }

}
