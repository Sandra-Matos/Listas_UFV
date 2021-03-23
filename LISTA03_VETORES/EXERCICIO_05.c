// Faça um algoritmo que preencha um vetor com quinze números,
//determine e mostre:
//a) O maior número e a posição por ele ocupada no vetor.
//b) O menor número e a posição por ele ocupada no vetor
#include <stdio.h>
#include <stdlib.h>
int main (){
    int vetor[15], maior, menor,i, posicaomaior,posicaomenor;
    printf("Digite ate quinze numeros: ");
    maior=0;
    menor=0;
    posicaomaior=0;
    posicaomenor=0;
    i=0;
    for(i=0; i<15;i++){
        scanf("%d",&vetor[i]);
        if(i==0){
            maior=vetor[i];
            posicaomaior=i;
            menor=vetor[i];
            posicaomenor=i;
        }
        else if(vetor[i]>maior){
            maior= vetor[i];
            posicaomaior =i;
        

        }else if(vetor[i]<menor){
            menor= vetor[i];
            posicaomenor=i;

        }
           
   


    }
    printf(" O maior numero no vetor e %d e sua posicao e  %d",maior, posicaomaior);
    printf("O menor numero no vetor e %d e sua posicao e  %d", menor, posicaomenor );

    return 0;
}