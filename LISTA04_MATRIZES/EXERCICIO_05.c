//Crie um programa que preencha duas matrizes (matrizA e matrizB) 3 x 5
//com números inteiros, calcule e mostre:
//a) A soma das duas matrizes, resultando em uma terceira matriz (matrizS)
//também 3 x 5
//b) A diferença das duas matrizes, resultando em uma quarta matriz (matrizD)
//também 3 x 5

#include <stdio.h>
#include<stdlib.h>
int main (){
    int n=3,m=5,matrizA[n][m],matrizB[n][m],matrizS,matrizD,i=0,j=0;
    printf("Digite ate 15 valores. ");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            scanf("%d",&matrizA[i][j]);

        }
    }

    printf("Digite ate 15 valores. ");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            scanf("%d",&matrizB[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            matrizS= matrizA[i][j]+ matrizB[i][j];
            
        }
    }
printf("A soma da matrizA com a matrizB resultou em [%d][%d]",matrizS);
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
             matrizS= matrizA[i][j]- matrizB[i][j];
           
        }

    }
printf("A diferenca da matrizA com a matrizB resultou em [%d][%d]",matrizD);
}