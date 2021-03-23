//O custo ao consumidor de um carro novo é a soma do custo de fábrica
//com o percentual do distribuidor e dos impostos (aplicados ao custo
//de fábrica). Supondo que o percentual do distribuidor seja de 28% e os
//impostos de 45%, escreva um programa que leia o custo de fábrica de
//um carro e escreva o custo do consumidor.
#include <stdio.h>;
#include <stdlib.h>;
int main (){
    float custo_consumidor, custo_fab, percentual_distri,imposto;
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f",&custo_fab);
    percentual_distri= custo_fab*28/100;
    imposto = 45/100;
    custo_consumidor= custo_fab+(custo_fab*imposto)+percentual_distri;
    printf("O custo do consumidor é: %.2f ", custo_consumidor);
    return 0;
}


