//Elabore um algoritmo que leia um conjunto de 10 notas de um aluno,
//armazene essas notas em um vetor, e calcule e imprime a média das
//notas
#include <stdio.h>
#include <stdlib.h>
int main (){
    int vetor_nota[10],i,media,soma;
    printf("Digite dez notas do aluno");
    soma=0;
    media=0;
    for (i=0;i<10;i++){
        scanf("%d",&vetor_nota[i]);
        soma=soma+vetor_nota[i];
        
    }
    media= soma/10;
    printf("A media das notas e: %d",media);
    return 0;

}