//Crie um algoritmo que leia um vetor de n posições. O tamanho do
//vetor deve ser previamente informado pelo usuário e deve ter, no
//máximo, 50 posições. Os valores serão informados via teclado. Após
//o preenchimento do vetor apresente o maior e menor número do vetor
//e suas respectivas posições.
#include <stdio.h>
#include <stdlib.h>
int main (){
    int quant,i,maior,menor;
    printf("Qual a quantidade de numeros para o vetor?");
    scanf("%d",&quant);
    int vetor[quant];
    maior=0;
    menor=0;
    printf("Digite os valores para preencher o vetor: ");
    for(i=0;i<50;i++){
        scanf("%d",&vetor[i]);

}