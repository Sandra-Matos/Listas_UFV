//Faça um algoritmo que preencha dois vetores de dez elementos
//numéricos cada um e mostre o vetor resultante da intercalação entre
//eles. Exemplo:
//vetor1 = {3,5,4,2,2,5,3,2,5,9}
//vetor2 = {7,15,20,0,18,4,55,23,8,6}
//vetorResultante = {3,7,5,15,4,20,2,0,..., 9,6}
#include <stdlib.h>
#include <stdio.h>
int main(){
    int vetor_1[10], vetor_2[10],i, vetorResultante[20];
    printf("Digite ate dez valores para preencher o primeiro vetor: ");
    for( i=0;i<10;i++){
        scanf("%d",&vetor_1[i]);
    }

    printf("Digite ate dez valores para preencher o segundo vetor: ");
    for( i=0;i<10;i++){
        scanf("%d",&vetor_2[i]);
    }
    for(i=0;i<20;i++){
        vetorResultante[i]=vetor_1[i];
        vetorResultante[i+1]=vetor_2[i];
        i=i+2;

    }
    for(i=0; i<20;i++){
        printf("%d ",vetorResultante[i]);

    }
    return 0;
}   