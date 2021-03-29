//Crie um programa que contenha um vetor de float contendo 10
//elementos. Imprima o endereço de memória de cada posição desse vetor.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    float vetor[10];
    float *pvetor;
    
    for (i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 30;
    }
    pvetor = &vetor;
    for (i = 0; i < 10; i++)
    {
        printf("vetor[%i]= %2.2f\n", i, vetor[i]);
    }

    for (i = 0; i < 10; i++){
        printf("Endereço de meoria de cada posicao: /n");

        printf("&vetor[%d]=%d\n", i, &pvetor[i]);

    }
    
        
    return 0;
}
