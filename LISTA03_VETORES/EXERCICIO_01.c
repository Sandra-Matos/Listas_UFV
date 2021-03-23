//Faça um algoritmo que preencha um vetor A com 6 elementos (A =
//[15 20 3 1 26 2]), e mostre a soma de seus elementos.
#include <stdio.h>
#include <stdlib.h>
int main (){
    int soma =0;
    int i;
    int vetor_A[6];
    vetor_A[0]=15;
    vetor_A[1]=20;
    vetor_A[2]=3;
    vetor_A[3]=1;
    vetor_A[4]=26;
    vetor_A[5]=2;
    for (i=0;i<6;i++)
    {
        soma=soma+vetor_A[i];
    }
    
    
    printf("%d",soma);
    return 0;
}