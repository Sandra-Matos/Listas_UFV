//Crie um programa que declare duas variáveis (inteiro e real), atribua
//valores para elas, e crie dois ponteiros, cada um apontando para uma destas
//variáveis. Mostre na tela: O valor e o endereço de memória das variáveis, o
//valor dos ponteiros, o endereço dos ponteiros e os valores apontados pelos
//ponteiros.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int um = 1;
    int *ponteiro_um;
    double dois = 2.50;
    double *ponteiro_dois;
    ponteiro_um = &um;
    ponteiro_dois = &dois;

    printf("Valor de um e:%d\n", um);
    printf("O valor do endereco de um e:%d\n", ponteiro_um);
    printf("O valor do ponteiro_um e:%d\n", ponteiro_um);
    printf("O endereco do ponteiro_um e:%d\n", &ponteiro_um);
    printf("O valor apontado pelo ponteiro um e:%d\n", *ponteiro_um);
    printf("Valor de dois e:%.2f\n", dois);
    printf("O valor do endereco de dois e:%d\n", ponteiro_dois);
    printf("O valor do ponteiro_dois e:%d\n", ponteiro_dois);
    printf("O endereco do ponteiro_dois e:%d\n", &ponteiro_dois);
    printf("O valor apontado pelo ponteiro dois e:%2.2lf\n", *ponteiro_dois);

    return 0;
}