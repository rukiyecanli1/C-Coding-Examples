#include <stdio.h>
#include <stdlib.h>

int main()
{
char a = 'T';
char b = 'E';
char c = 'S';
char d = 'T';
printf("a nin adresi: %d \n", &a);   //9001
printf("b nin adresi: %d \n", &b);   //9002
printf("c nin adresi: %d \n", &c);   //9003
printf("d nin adresi: %d \n", &d);   //9003
printf("a nin degeri: %d\n", a);     //T'nin ascii kodu
char *p;
p = &a;
printf("p nin degeri : %d\n", p);    //9001
printf("*p nin degeri: %d\n\n", *p); //T'nin ascii kodu
*p = 'B'; // ascii kodu 66
printf("a nin degeri: %d\n", a);     //T'nin ascii kodu !!!!!!yanlýþ. cvp: B'nin ascii kodu
printf("*p nin degeri: %d\n", *p);   //B'nin ascii kodu














    return 0;
}
