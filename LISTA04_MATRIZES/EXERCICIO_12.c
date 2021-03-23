//Criar um algoritmo que leia e armazene os elementos de uma matriz
//inteira 10x10 e escreva as matrizes resultantes das seguintes trocas:
// A segunda linha pela oitava linha;
// A quarta coluna pela décima coluna;
// A diagonal principal pela diagonal secundária.

#include <stdio.h>
#include<stdlib.h>
int main(){
    int n=10, matriz[n][n], i=0, j=0;
    
    printf( "Digite ate cem valores para preencher a matriz.");
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%d",&matriz[i][j]);
            
        }
    }


}