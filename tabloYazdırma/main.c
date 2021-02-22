#include <stdio.h>
#include <stdlib.h>
int main()
{
    char string[1000];


   int i,j,k=0;
    for(i=1;i<=100;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                k++;
        }
        if(k!=2){
          if(i%2==0){
            sprintf(string,"|%3.d(cift)| ...><... |%5.d|..>>..|%9.3f| ", i,i*2,(float)i*2);
            printf("%s\n", string);
        }
        }

            else if(k==2)
        {
            k=i;
            sprintf(string,"|%3.d(asal)| ...^^... |%5.d|..>>..|%9.4f| ", i,i*i,(float)i*i);
                printf("%s\n", string);
        }
        k=0;
          if(i%2==1 )
        {
            sprintf(string,"|%3.d(tek )| ...//... |%5.d|..>>..|%9.2f| ", i,i/2,(float)i/2);
            printf("%s\n", string);
        }


    }



    }
