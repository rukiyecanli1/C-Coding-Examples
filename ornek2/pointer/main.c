#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    printf("a'nin degeri: %d\n\n", a);      //5
    printf("a'nin adresi: %p\n", &a);       //9001
    printf("10'luk tabanda: %u\n\n", &a);   //9001'in 10luk tabana d�n��m�� hali
    int * p;
    p = &a;
    printf("p : %p\n", p);                  //9001
    printf("*p : %d\n\n", *p);              //5
    *p = 32;
    printf("a'nin degeri: %d\n", a);        //art�k p'nin tuttu�u de�er(a)=32
}

    //hepsi do�ru tahminlerimiiin!
    //Congraculation!
