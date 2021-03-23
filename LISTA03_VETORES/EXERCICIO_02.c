#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int vetor [10];
    int i;
    printf("Digite ate dez valores.");
    for (i=0;i<10;i++){
        scanf("%d",&vetor[i]);
        if(vetor[i]==5)
            printf("Ha elementos 5 nesse vetor. A posicao e: %d\n",i);
    }
     return 0;
}