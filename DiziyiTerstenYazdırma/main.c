#include <stdio.h>
#include <stdlib.h>

void main()
{
  int N,S,gecici;
  N=4;
  int A[]={1,3,2,4};
  S=N/2;
  int i;
    for(i=0;i<S;i++){
        gecici=A[i];
        A[i]=A[N-i-1];
        A[N-i-1]=gecici;
    }
    for(i=0;i<N;i++){
        printf("%d",A[i]);
    }
}
