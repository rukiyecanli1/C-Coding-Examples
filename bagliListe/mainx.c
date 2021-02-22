#include <stdio.h>
#include <stdlib.h>
struct dugum{
    int veri;
    struct dugum *sonraki;
};

int main()
{
struct dugum *birinci=NULL;
birinci=(struct dugum*)malloc(sizeof(struct dugum));
struct dugum *ikinci=(struct dugum*)malloc(sizeof(struct dugum));
struct dugum *ucuncu=(struct dugum*)malloc(sizeof(struct dugum));

 birinci->veri=1;
    birinci->sonraki=ikinci;
    ikinci->veri=2;
    ikinci->sonraki=ucuncu;
    ucuncu->veri=3;
    ucuncu->sonraki=NULL;
    printf("%d => %d",birinci->veri,ikinci->veri);
    return 0;
}
