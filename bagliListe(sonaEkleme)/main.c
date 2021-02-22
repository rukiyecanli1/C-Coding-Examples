#include <stdio.h>
#include <stdlib.h>
struct dugum{
    int veri;
    struct dugum *sonraki;
 };
void sonaEkle(struct dugum** yeniRef,int yeniVeri){
struct dugum *yeniDugum=(struct dugum*)(malloc(sizeof(struct dugum)));
struct dugum *sonuncu=yeniRef;
yeniDugum->veri=yeniVeri;
yeniDugum->sonraki=NULL;
if(*yeniRef==NULL){
    *yeniRef=yeniDugum;
    return;
}
  else if (sonuncu->sonraki!=NULL){
    sonuncu=sonuncu->sonraki;
  }
    sonuncu->sonraki=yeniDugum;
return;
}


