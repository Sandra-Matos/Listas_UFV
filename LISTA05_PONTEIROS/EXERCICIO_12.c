//Escreva um programa que declare uma matriz 100x100 de inteiros.
//Você deve inicializar a matriz com zeros usando ponteiros para endereçar
//seus elementos. Preencha depois a matriz com os números de 1 a 10000,
//também usando ponteiros.

#include<stdio.h>
#include<stdlib.h>
int main (){
    int i=0,j=0;
    int *ponteiro=NULL;
    int m=100,matriz[m][m];

    for(i=0;i<m;i++){
         for(j=0;j<m;j++){
             ponteiro=&matriz[i][j];
             *ponteiro=0
         }

    }
    int contador =1;
     for(i=0;i<m;i++){
         for(j=0;j<m;j++){
             ponteiro=&matriz[i][j];
             *ponteiro=contador;
             contador++;
         }

     for(i=0;i<m;i++){
         for(j=0;j<m;j++){
             printf("%d\n",matriz[i][j]);

         }

    }

    }
       return 0;
}