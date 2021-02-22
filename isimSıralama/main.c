#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Kisi{
    char ad[100][80];
    int yas;
};

int main()
{
   char tisimler[100][80], tmp[80];
   struct  Kisi* kisiler;
   int sayi;
   printf("Kisi sayisini giriniz:");
   scanf("%d",&sayi);
   kisiler=malloc(sayi * sizeof(struct Kisi));
     for(int i=0;i<sayi;i++){
       printf("%d. kisinin ismini giriniz:",i);
       scanf("%s",&kisiler[i].ad);
       printf("%d. kisinin yasini giriniz:",i);
       scanf("%d",&kisiler[i].yas);
     }
     int i, j;
	for (i = 0; i < sayi; i++)
	{
		strcpy(tisimler[i], kisiler[i].ad);
	}
	for (i = 0; i < sayi - 1 ; i++)
	{
		for (j = i + 1; j < sayi; j++)
		{
			if (strcmp(kisiler[i].ad, kisiler[j].ad) > 0)
			{
				strcpy(tmp, kisiler[i].ad);
				strcpy(kisiler[i].ad, kisiler[j].ad);
				strcpy(kisiler[j].ad, tmp);
			}
		}
       printf("\n");
   }
   printf("\n");
	printf("Ada Gore Fihrist Siralamasi\n");

	for (i = 0; i < sayi; i++)
	{
		printf("%s %d",kisiler[i].ad,kisiler[i].yas);
		printf("\n");
	}

    printf("\n");
	printf("Yasa Gore Buyukten Kucuge Siralamasi\n");

    int gec;
     for(i=0;i<sayi-1;i++)
  {
   for(j=i+1;j<sayi;j++)
   {
     if( kisiler[j].yas>kisiler[i].yas )
    {
      gec = kisiler[i].yas;
      kisiler[i].yas = kisiler[j].yas;
      kisiler[j].yas = gec;
    }
   }
  }
   for(i=0;i<sayi;i++)
   printf("%s %d",kisiler[i].ad,kisiler[i].yas);
   printf("/n");
 }



