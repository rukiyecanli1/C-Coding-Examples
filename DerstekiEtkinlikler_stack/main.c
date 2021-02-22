#include <stdio.h>
#include <stdlib.h>
struct Yigin{
int SP;
unsigned kapasite;
int* dizi;
};
struct Yigin* yiginOlustur(unsigned kapasite){
struct Yigin* yigin=(struct Yigin*)malloc(sizeof(struct Yigin));
yigin->SP=-1;
yigin->kapasite=kapasite;
yigin->dizi=(int*)malloc(sizeof(yigin->kapasite*(sizeof(int))));
return yigin;
};
int dolumu(struct Yigin *yigin){
return yigin->SP==yigin->kapasite-1;
}
int bosmu(struct Yigin *yigin){
return; }

void ekle(struct Yigin* yigin, int veri){
    if(dolumu(yigin))
        return;
    yigin->dizi[++yigin->SP]=veri;
    printf("%d verisi yigina eklendi\n",veri);
}
int al(struct Yigin *yigin){
if(bosmu(yigin)){
    return -500;
    return yigin->dizi[yigin->SP--];
}
}
int main()
{
    struct Yigin* yigin=yiginOlustur(100);
    ekle(yigin,10);
    printf("Yýigindan %d verisi alindi",al(yigin));
return 0;
}

