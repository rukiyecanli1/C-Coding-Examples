#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <graphics.h>


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
char karakter1[40],karakter2[40], karakter3[40],karakter4[40];
int ch=0;

void xEksenleriniCiz()
{
    for(int k=0; k<40; k++)
    {
        setcolor(RED);
        setlinestyle(DOTTED_LINE, 0, NORM_WIDTH );
        line(800,20*k,0,20*k);
        setcolor(WHITE);
        setlinestyle(SOLID_LINE, 4, THICK_WIDTH );
        line(395,20*k,405,20*k);

        if(k==20)
        {
            setcolor(WHITE);
            setlinestyle(SOLID_LINE, 4, THICK_WIDTH);
            line(800,20*k,0,20*k);
        }
    }
}

void yEksenleriniCiz()
{
    for(int j=0; j<40; j++)
    {
        setcolor(RED);
        setlinestyle(DOTTED_LINE, 0, NORM_WIDTH);
        line(20*j,800,20*j,0);
        //kisa çizgiler
        setcolor(WHITE);
        setlinestyle(SOLID_LINE, 0, THICK_WIDTH );
        line(20*j,395,20*j,405);

        if(j==20)
        {
            setcolor(WHITE);
            setlinestyle(SOLID_LINE, 0, THICK_WIDTH );
            line(20*j,800,20*j,0);

        }
    }
}

void xEkseniSayilari()
{
    int x=-20;
    for(int j=0; j<40; j++)
    {
        sprintf(karakter1, "%d",x);
        outtextxy(20*j,402,karakter1);
        x=x+1;
    }
}


void yEkseniSayilari()
{
    int y=20;
    for(int j=0; j<40; j++)
    {
        sprintf(karakter2, "%d",y);
        outtextxy(402,20*j,karakter2);
        y=y-1;

    }
}

double mesafeHesapla(const struct Nokta &koordinatA, const struct Nokta koordinatB)
{

    double mesafe=sqrt(pow(koordinatA.x-koordinatB.x,2)+pow(koordinatA.y-koordinatB.y,2));
    return mesafe;
}
bool icindeMi(struct Cember cCemberi, struct Nokta pNoktasi)
{
    if(mesafeHesapla(cCemberi.m,pNoktasi)<=cCemberi.yc)
        return true ;
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
    return c2;
}
bool gecerliCemberMi( const struct Cember cCemberi,const struct Nokta PNoktalari[])
{
    int i=0;
    for(i=0; i<satir; i++)
        if(!icindeMi(cCemberi,PNoktalari[i]))
            return false;
    return true;

}


int main()
{
    int gd = DETECT;
    int gm;
    initwindow(800,800,"");

  xEksenleriniCiz();

    xEkseniSayilari();

    yEksenleriniCiz();

    yEkseniSayilari();


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
        koordinatXY[i].x =atof((const char*)vx);
        koordinatXY[i].y=atof((const char*)vy);
        printf("x : %.f| y : %.f\n",koordinatXY[i].x,koordinatXY[i].y);
        circle((400+(koordinatXY[i].x)*20),(400-(koordinatXY[i].y)*20),2);
        sprintf(karakter3,"(%.f,%.f)",koordinatXY[i].x,koordinatXY[i].y);
        outtextxy(402+koordinatXY[i].x*20,402-koordinatXY[i].y*20,karakter3);

        printf("/-----------/ \n");
        i++;
    }

    struct Nokta *ptrKoor=&koordinatXY[0];



    //  struct Cember enKucuk=enKucukCemberiBul(koordinatXY);
    // struct Nokta PNoktalari[satir];
    struct Cember min_cember;
    min_cember.m.x=0.0;
    min_cember.m.y=0.0;
    min_cember.yc=100.0;

    for(int i=0; i<satir; i++)
    {
        for(int j=i+1; j<satir; j++)
        {
            struct Cember gecici_cember=circle_fromm(koordinatXY[i],koordinatXY[j]);
            if (gecici_cember.yc < min_cember.yc && gecerliCemberMi(gecici_cember, koordinatXY))
            {

                min_cember.m.x=gecici_cember.m.x;
                min_cember.m.y=gecici_cember.m.y;
                min_cember.yc=gecici_cember.yc;

            }
        }
    }


    for (int i=0; i<satir; i++)
    {
        for (int j=i+1; j<satir; j++)
        {

            for (int k=j+1; k<satir; k++)
            {

                struct Cember gecici_cember = circle_from(koordinatXY[i], koordinatXY[j], koordinatXY[k]);
                if (gecici_cember.yc < min_cember.yc && gecerliCemberMi(gecici_cember, koordinatXY))
                {
                    min_cember.m.x=gecici_cember.m.x;
                    min_cember.m.y=gecici_cember.m.y;
                    min_cember.yc=gecici_cember.yc;


                }
            }
        }
    }

    printf("En kucuk çemberin yaricapi:%f\n",min_cember.yc);
    printf("En kucuk cemberin merkez koordinatlarý: %f %f", min_cember.m.x, min_cember.m.y);


    sprintf(karakter4,"(%.2f,%.2f)",min_cember.m.x,min_cember.m.y);
    outtextxy((402+min_cember.m.x*20),(402-min_cember.m.y*20),karakter4);

    circle(400+min_cember.m.x*20,400-min_cember.m.y*20,3);

    // outtextxy(402+min_cember.m.x,402-min_cember.m.y,karakter4);

    setcolor(YELLOW);
    circle(400+(min_cember.m.x)*20,400-(min_cember.m.y)*20,(20*min_cember.yc));

    setcolor(YELLOW);
    setlinestyle(SOLID_LINE, 4, THICK_WIDTH );
    line(400+(min_cember.m.x)*20,400-(min_cember.m.y)*20,400+(((min_cember.m.x)*20)+(min_cember.yc)*20),400-(min_cember.m.y)*20);




    fclose(dosya);
    fclose(dosya2);

    getch();
    closegraph();

}
