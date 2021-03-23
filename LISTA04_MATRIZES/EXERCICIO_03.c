//Faça um algoritmo para ler valores reais e armazenar em uma matriz 5x5 e
//depois imprima os elementos da diagonal principal.
#include <stdio.h>
#include<stdlib.h>
int main (){
    int i=0, j=0, n=5;
    float  matriz[n][n];
    printf("Digite 25 valores. ");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%f",&matriz[i][j]);
        }
            

    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j)
                printf(" %.1f ", matriz[i][j]);


        }
    }
    return 0;
}