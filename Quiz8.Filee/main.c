#include <stdio.h>
#include <stdlib.h>
int main()
{
    char dizi[100];
    printf("Sayý giriniz: ");
    fgets(dizi,100,stdin);
    char karakter;
    int i;
    FILE *dosya=fopen("quiz8.txt","w");
    for(i=0; i<strlen(dizi); i++)
    {
        karakter=dizi[i];
        switch(karakter)
        {
        case '0':
            printf("sýfýr ");
            fprintf(dosya,"sifir ");
            break;
        case '1':
            printf("bir ");
            fprintf(dosya,"bir ");
            break;
        case '2':
            printf("iki ");
            fprintf(dosya,"iki ");
            break;
        case '3':
            printf("üç ");
            fprintf(dosya,"üç ");
            break;
        case '4':
            printf("dört ");
            fprintf(dosya,"dört ");
            break;
        case '5':
            printf("beþ ");
            fprintf(dosya,"beþ ");
            break;
        case '6':
            printf("altý ");
            fprintf(dosya,"altý ");
            break;
        case '7':
            printf("yedi ");
            fprintf(dosya,"yedi ");
            break;
        case '8':
            printf("sekiz ");
            fprintf(dosya,"sekiz ");
            break;
        case '9':
            printf("dokuz ");
            fprintf(dosya,"dokuz ");
            break;
        default:
            break;
        }
    }
    printf("\n");
    printf("Dosyaya kaydedilmiþtir.");
    fclose(dosya);
    return 0;
}


