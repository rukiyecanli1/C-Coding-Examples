#include <stdio.h>
#include <stdlib.h>

int asal_mi(int sayi){
int i;
  for(i=2;i<(sayi/i);i++)
     if(!(sayi%i))
    break;
     if(i>(sayi/i))
        return 1;
}

int main()
{
    int a=17;
    int sonuc=asal_mi(a);
    if(sonuc==1)
    printf("%d asaldir ...",a);
    else
     printf("%d asal degildir ...",a);

}
