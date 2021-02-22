#include <stdio.h>
#include <stdlib.h>

struct YiginDugum{
int veri;
struct YiginDugum *sonraki;
};
struct YiginDugum *YeniDugum(int veri){
struct YiginDugum *yiginDugum=(struct YiginDugum*)malloc(sizeof(struct YeniDugum));
yiginDugum->veri=veri;
yiginDugum->sonraki=NULL;
return yiginDugum;
};
void ekle(struct YiginDugum**kok,int veri){
  struct (YiginDugum* yiginDugum=YeniDugum((veri)));
  yiginDugum->sonraki=*kok;
  *kok=yiginDugum;
  printf("%d verisine sahip düðüm eklendi\n",veri);


};
int main()






















