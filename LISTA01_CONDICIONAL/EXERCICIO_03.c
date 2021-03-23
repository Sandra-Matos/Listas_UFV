//Uma pessoa investiu um capital de X reais a juros mensais de z%
//durante 1 ano. Faça um programa para ler do teclado os valores X e Z
//e calcular e mostrar o montante final do investimento. 
#include<stdio.h>
#include<stdlib.h>
int main (){
    float X,Z, montante_final;
    printf("Digite o valor do capital investido:\n ");
    scanf("%f",&X);
    printf("Digite o valor dos juros mensais:\n ");
    scanf("%f",&Z);

    montante_final= X+(12*(Z/100));
    printf("O montante final do investimento foi R$: %.2f: ",montante_final);
    return 0;

}