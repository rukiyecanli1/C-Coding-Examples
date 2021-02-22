#include <stdio.h>
#include <stdlib.h>

int main()
{
    //p=a'nın adresi, *p=a'nın degeri
    int a=5;
    int *p;
    p=&a;
    printf("a nin degeri=%d\n",a);
    printf("a nin adresi=%p\n",&a/* =p */);
    printf("p nin adresi=%p\n",&p);
    printf("p=&a=%p\n",p);
    printf("pointer in tuttugu deger=%d\n",*p);
    *p=7; // olsun :)) Pointer silah sahibi olduğu için tuttuğu değişkeni istediğini yaptırabilir.
    printf("pointer in tuttugu yeni deger=%d\n",*p);
    printf("a nin yeni degeri=%d",a);
    return 0;
}
