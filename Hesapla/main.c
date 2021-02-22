#include <stdio.h>
#include <stdlib.h>
void hesapla(int toplam, int *yil, int *ay, int *gun);
/*Quiz 2

Bir iþin bitme süresini gün olarak okuyup bu deðeri hesapla() fonksiyonuna yollayýnýz.
hesapla() fonksiyonunda parametre olarak gelen gün deðerini  yýl, ay ve güne dönüþtürüp bu deðerleri
kaynak parametresi olarak main() fonksiyonuna yollayýp main() fonksiyonunda ise bu deðerleri ekranda gösteriniz.
(Tüm aylarýn 30 gün sürdüðü kabul edilecektir.)

NOT: Fonksiyon þu þekilde tanýmlanacaktýr:

void hesapla (int toplam, int *yil, int *ay, int *gun)

*/
int main()
{
    int toplam,yil,ay,gun;
    printf("Isin bitme suresinin kac gun oldugunu giriniz:");
    scanf("%d",&toplam);
    hesapla(toplam,&yil,&ay,&gun);
    printf("%d yil %d ay %d gun surer...",yil,ay,gun);
    return 0;
}
void hesapla (int toplam, int *yil, int *ay, int *gun){
    *yil=toplam/365;
    *ay=(toplam%365)/30;
    *gun=toplam-(*yil*365)-(*ay*30);
}



