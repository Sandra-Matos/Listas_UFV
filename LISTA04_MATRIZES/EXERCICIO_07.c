//. Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e
//escreva todos os elementos, exceto os elementos da diagonal principal.

#include<stdio.h>
#include <stdlib.h>
int main(){
    int n=10,matriz[n][n],i=0,j=0;
    printf("Digite ate 100 valores: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf(" %d ",&matriz[i][j]);
             
            }            
            
        }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
              if(i!=j){
                  printf(" %d ",matriz[i][j]);
            }            
            

        }
    }


 return 0;

          

  

}