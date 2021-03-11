// Criar um algoritmo que leia dois valores para as variáveis A e B, que
//efetue a troca dos valores de forma que a variável A passe a ter o valor
//da variável B e que a variável B passe a ter o valor da variável A.
//Apresente os valores trocados
#include <stdio.h>
#include <stdlib.h>
int main (){
    int A,B, troca;
    printf("Digite o valor de A. ");
    scanf("%d",&A);
    printf("Digite o valor de B. ");
    scanf("%d",&B);
    
    troca = A;
    A = B;
    B=troca;
    printf ( "O valor de  A e:  %d ",A );
    printf(" o valor de  B e:  %d ", B);


 return 0;
}