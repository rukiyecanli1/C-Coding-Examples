
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


struct Nokta
{
    double x;
    double y;
};
struct Cember
{
    struct Nokta m;
    double yc;
};



FILE *dosya, *dosya2;
int i=0,satir=0;
char karakter1[40],karakter2[40], karakter3[40];
int ch=0;


double mesafeHesapla(const struct Nokta koordinatA, const struct Nokta koordinatB)
{

    double mesafe=sqrt(pow(koordinatA.x-koordinatB.x,2)+pow(koordinatA.y-koordinatB.y,2));
    printf("mesafe=%f\n",mesafe);
    return mesafe;
}
int icindeMi(struct Cember cCemberi, struct Nokta pNoktasi)
{
    printf("icindeMi\n");
    if(mesafeHesapla(cCemberi.m,pNoktasi)<=cCemberi.yc)
        return 1 ;
}
struct Nokta cemberinMerkeziniBul(int bx,int by,int cx, int cy)
{
    double B=bx*bx+by*by;
    double C=cx*cx+cy*cy;
    double D=(bx*cy-by*cx)+0.000000001;
    double sonuc1=(cy*B-by*C)/(2*D);
    double sonuc2=(bx*C-cx*B)/(2* D);
    struct Nokta cemberinMerkezi;
    cemberinMerkezi.x = sonuc1;
    cemberinMerkezi.y = sonuc2;
    printf("cemberinMerkezi:%f,%f\n",sonuc1,sonuc2);
    return cemberinMerkezi;
}
struct Cember circle_from(const struct Nokta aNoktasi, const struct Nokta bNoktasi,const struct Nokta cNoktasi)
{
    struct Nokta Q;
    Q=cemberinMerkeziniBul(bNoktasi.x-aNoktasi.x, bNoktasi.y-aNoktasi.y, cNoktasi.x-aNoktasi.x, cNoktasi.y-aNoktasi.y);
    Q.x+=aNoktasi.x;
    Q.y+=aNoktasi.y;
    double mesafe=mesafeHesapla(Q,aNoktasi);
    struct Cember c;
    c.m.x=Q.x;
    c.m.y=Q.y;
    c.yc=mesafe;
    printf("c :%d %d %f\n",c.m.x,c.m.y,c.yc);
    return c;
};
struct Cember circle_fromm( const struct Nokta aNoktasi,const struct Nokta bNoktasi)
{
    struct Nokta cNoktasi;
    cNoktasi.x=(aNoktasi.x+bNoktasi.x)/2.0;
    cNoktasi.y=(aNoktasi.y+bNoktasi.y)/2.0;
    double mesafe2=(mesafeHesapla(aNoktasi,bNoktasi))/2.0;
    struct Cember c2;
    c2.m.x=cNoktasi.x;
    c2.m.y=cNoktasi.y;
    c2.yc=mesafe2;
     printf("c2 :%d %d %f\n",c2.m.x,c2.m.y,c2.yc);
    return c2;
}
int gecerliCemberMi( const struct Cember cCemberi,const struct Nokta PNoktalari[])
{
    int i=0;
    for(i=0; i<satir; i++)

    {
        printf("gecerliCembermi:%d\n",i);
        if(!icindeMi(cCemberi,PNoktalari[i]))

            return 0;
        return 1;
    }

}
/*struct Cember enKucukCemberiBul(struct Nokta PNoktalari[])
{
    struct Cember min_cember;
    struct Cember gecici_cember;
   min_cember.m.x=0;min_cember.m.y=0;min_cember.yc=100;
    for(int i=0; i<satir; i++)
    {
        for(int j=i+1; j<satir; j++)
        {
              gecici_cember=circle_fromm(PNoktalari[i],PNoktalari[j]);
            if (gecici_cember.yc < min_cember.yc && gecerliCemberMi(gecici_cember, PNoktalari))
                 min_cember.m.x=gecici_cember.m.x;
                    min_cember.m.y=gecici_cember.m.y;
                    min_cember.yc=gecici_cember.yc;
        }
    }
    for (int i=0; i<satir; i++)
    {
        for (int j=i+1; j<satir; j++)
        {
            for (int k=j+1; j<satir; j++)
            {
                gecici_cember = circle_from(PNoktalari[i], PNoktalari[j], PNoktalari[k]);
                if (gecici_cember.yc < min_cember.yc && gecerliCemberMi(gecici_cember, PNoktalari))
                    min_cember.m.x=gecici_cember.m.x;
                    min_cember.m.y=gecici_cember.m.y;
                    min_cember.yc=gecici_cember.yc;

            }
        }
    }
    return min_cember;
}*/

int main(){



     dosya=fopen("noktalarr.txt","r");
	 dosya2= fopen("noktalarr.txt","r");

    if(dosya==NULL)
        printf("Dosya bulunamadi.");
    if(dosya2 == NULL)
       printf("Dosya bulunamadi.");

    //ibrahim
    // bir dosyanin satir sayisini almak istersen bu sekilde yapabilirsin.
    // yeni bir file olusturup dosyanin satir sayisini bulma islemi yaptik.
    // ayni file i kullansaydik dosyanin sonuna gelmis olacagindan ikinci okumayi yapmayacakti.



   while(!feof(dosya2))
	{
	  ch = fgetc(dosya2);
	  if(ch == '\n')//new line gordukce satir bir artirilir.
	  {

	    satir++;
	  }
	}
satir++;


    struct Nokta koordinatXY[satir];
    char vx[satir];
    char vy[satir];

	while( fscanf(dosya, "%s %s\n", &vx, &vy) != EOF )
    {
        printf("---- %d---- \n",i+1);
        koordinatXY[i].x =atoi((const char*)vx);
        koordinatXY[i].y=atoi((const char*)vy);
        printf("x : %d| y : %d\n",koordinatXY[i].x,koordinatXY[i].y);
        circle((400+(koordinatXY[i].x)*20),(400-(koordinatXY[i].y)*20),3);
        sprintf(karakter3,"(%d,%d)",koordinatXY[i].x,koordinatXY[i].y);
        outtextxy(402+koordinatXY[i].x*20,402-koordinatXY[i].y*20,karakter3);
        printf("/-----------/ \n");
        i++;
    }




//Hatayi bulabilmen icin eski usul debug yapabilirsin. Her yere log yazdirip sorunun nerde oldugunu bulman onemli.
//3 tane ic ice for dongusu var mesela bu sekilde nested yapilari kullanirken cok dikkatli olmak gerek.


  //  struct Cember enKucuk=enKucukCemberiBul(koordinatXY);
   // struct Nokta PNoktalari[satir];
    struct Cember min_cember;
    struct Cember gecici_cember;
    min_cember.m.x=0.0;
    min_cember.m.y=0.0;
    min_cember.yc=100.0;

    for(int i=0; i<1; i++)
    {
        for(int j=i+1; j<1; j++)
        {
          gecici_cember=circle_fromm(koordinatXY[i],koordinatXY[j]);
            if (gecici_cember.yc < min_cember.yc && gecerliCemberMi(gecici_cember, koordinatXY)){
                min_cember.m.x=gecici_cember.m.x;
                min_cember.m.y=gecici_cember.m.y;
                min_cember.yc=gecici_cember.yc;
                printf("%f %f %f",min_cember.m.x,min_cember.m.y,min_cember.yc);
            }
        }
    }
 /*   for (int i=0; i<satir; i++)
    {
        printf("1.for i:%d\n",i);
        for (int j=i+1; j<satir; j++)
        {
            printf("2.for j:%d\n",j);
            for (int k=j+1; k<satir; k++)
            {
                printf("3.for k:%d\n",k);
                gecici_cember = circle_from(koordinatXY[i], koordinatXY[j], koordinatXY[k]);
                if (gecici_cember.yc < min_cember.yc && gecerliCemberMi(gecici_cember, koordinatXY)){
                        printf("gecerlicemberMi:%d\n",gecerliCemberMi(gecici_cember, koordinatXY));
                    min_cember.m.x=gecici_cember.m.x;
                printf("min_cember.m.x:%f\n",min_cember.m.x);
                    min_cember.m.y=gecici_cember.m.y;
                    printf("min_cember.m.y:%f\n",min_cember.m.y);
                     min_cember.yc=gecici_cember.yc;
                     printf("min_cember.yc:%f\n",min_cember.yc);
            }
        }
    }
    }*/

   // printf("En kucuk çemberin yaricapi:%f\n",gecici_cember.yc);
    //printf("En kucuk cemberin merkez koordinatlarý: %f %f", gecici_cember.m.x, gecici_cember.m.y);

    fclose(dosya);
    fclose(dosya2);
	getch();

}
































