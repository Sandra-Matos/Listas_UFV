//. Escreva um algoritmo que leia um vetor inteiro de 10 posições e crie
//um segundo vetor, substituindo os valores menores que 10 por 1.
//Mostre os 2 vetores no final do algoritmo


#include <stdio.h>
#include<stdlib.h>
int main (){
    int vetor[10],segundo_vetor[10],i;
    printf("Digite ate dez valores: ");
    for(i=0; i<10;i++){
        scanf("%d",&vetor[i]);
        segundo_vetor[i]=vetor[i];
        if(vetor[i] <10){
            segundo_vetor[i]=1;

        }
    }
    for(i=0; i<10;i++)
        printf("%d ",vetor[i]);
    printf("\n");
    for(i=0;i<10;i++)
        printf("%d ", segundo_vetor[i]);
    return 0;
}