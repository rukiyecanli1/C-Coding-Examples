#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
int x,i;
//program her ba�lad���nda say�n�n� de�i�mesi i�in
srand(time(NULL));
x=rand()%5;  // [0-5]
printf("%d\n",x);

x=10+rand()%90; // [10-99]
printf("\n%d\n",x);

x=1+(rand()%10)*2;  // 0-20 aras� tek say�lar
printf("\n%d\n\n",x);

for(i=0;i<5;i++){
  x=1+rand()%6; // [1-6] aras� 5 tane say�
  printf("%d\n",x);
}

x=3;
printf("\n%d\n",x);
x=4;
printf("%d\n",x);
}
