#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayac = 0;
     char string[1000];
    for(int i=1; i<=100; i++)
    {
        for(int j=1;j<=i;j++)
        {
        if(i%j==0)
        {
            sayac++;
        }
        if(i%2==0)
        {
            sprintf(string,"|%3.d(cift)| ...><... |%5.d|..>>..|%9.3f| ", i,i*2,(float)i*2);
            printf("%s\n", string);
        }
        else
        {
           sprintf(string,"|%3.d(tek )| ...//... |%5.d|..>>..|%9.2f| ", i,i/2,(float)i/2);
            printf("%s\n", string);
        }
    }

    if(sayac!=0)
    {
        sprintf(string,"|%3.d(asal)| ...^^... |%5.d|..>>..|%9.4f| ", i,i*i,(float)i*i);
                printf("%s\n", string);
    }
}
}
