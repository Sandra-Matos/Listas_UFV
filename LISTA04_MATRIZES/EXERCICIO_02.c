//Faça um programa que preencha uma matriz 3x5 com números inteiros,
//calcule e exiba a quantidade de elementos com valores entre 15 e 20

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n =3,m=5,i=0,j=0, cont=0;
    int matriz[n][m];
    printf("Digite ate 15 valores: ");
    for (i=0;i<3;i++){
        for(j=0;j<5;j++){
            scanf("%d",&matriz[i][j]);
           
      }  
            
    }              

    for (i=0;i<3;i++){
        for(j=0;j<5;j++){
            if (matriz[i][j] > 15 && matriz[i][j] <20){
                cont= cont+1;
                
            }

        }
    }     
    printf("Os valores entre 15 e 20 sao %d", cont);


    return 0;
}
             