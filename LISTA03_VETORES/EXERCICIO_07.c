//7. Escreva um algoritmo que leia um vetor de tamanho N (informado
//pelo usuário) e escreva a soma de todos os elementos de índice par

#include <stdio.h>
#include<stdlib.h>
int main (){
    int quant, soma,i;
    printf("Qual a quantidade de numeros para o vetor?");
    scanf("%d",&quant);
    int vetor[quant];
    soma=0;
    printf("Digite os valores para preencher o vetor: ");
    for(i=0;i<quant;i++){
        scanf("%d",&vetor[i]);
        if(i%2==0){
            soma = soma+ vetor[i];

        }
        
    }

    printf("A soma de todos os elementos de indice par sao: %d", soma);
    return 0;

}