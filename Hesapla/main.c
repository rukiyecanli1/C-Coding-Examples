#include <stdio.h>
#include <stdlib.h>
void hesapla(int toplam, int *yil, int *ay, int *gun);
/*Quiz 2

Bir i�in bitme s�resini g�n olarak okuyup bu de�eri hesapla() fonksiyonuna yollay�n�z.
hesapla() fonksiyonunda parametre olarak gelen g�n de�erini  y�l, ay ve g�ne d�n��t�r�p bu de�erleri
kaynak parametresi olarak main() fonksiyonuna yollay�p main() fonksiyonunda ise bu de�erleri ekranda g�steriniz.
(T�m aylar�n 30 g�n s�rd��� kabul edilecektir.)

NOT: Fonksiyon �u �ekilde tan�mlanacakt�r:

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



