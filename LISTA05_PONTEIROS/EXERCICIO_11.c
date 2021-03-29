//Elabore um programa que armazene valores aleatórios (usando a
//função rand()) em um vetor de inteiros de 10 posições e depois, em outro
//vetor de ponteiros de inteiros de tamanho 10, coloque os endereços dos
//valores do vetor de inteiros.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,vetor[10],*numeros;
    for(i=0;i<10;i++){
        vetor[i]=rand() % 100;
        printf("Vetor[%d]=%d\n",i,vetor[i]);
    }
    printf("O endereco dos numeros dos vetores:\n");
       
    numeros=&vetor;    
    for(i=0;i<10;i++){
        printf("&%d=%d\n",vetor[i],&numeros[i]);
    }

} 