#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    printf("a'nin degeri: %d\n\n", a);      //5
    printf("a'nin adresi: %p\n", &a);       //9001
    printf("10'luk tabanda: %u\n\n", &a);   //9001'in 10luk tabana dönüþmüþ hali
    int * p;
    p = &a;
    printf("p : %p\n", p);                  //9001
    printf("*p : %d\n\n", *p);              //5
    *p = 32;
    printf("a'nin degeri: %d\n", a);        //artýk p'nin tuttuðu deðer(a)=32
}

    //hepsi doðru tahminlerimiiin!
    //Congraculation!
