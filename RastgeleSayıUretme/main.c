#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
int x,i;
//program her baþladýðýnda sayýnýný deðiþmesi için
srand(time(NULL));
x=rand()%5;  // [0-5]
printf("%d\n",x);

x=10+rand()%90; // [10-99]
printf("\n%d\n",x);

x=1+(rand()%10)*2;  // 0-20 arasý tek sayýlar
printf("\n%d\n\n",x);

for(i=0;i<5;i++){
  x=1+rand()%6; // [1-6] arasý 5 tane sayý
  printf("%d\n",x);
}

x=3;
printf("\n%d\n",x);
x=4;
printf("%d\n",x);
}
