//Criar um algoritmo que possa armazenar em uma matriz as alturas de dez
//atletas de cinco delegações que participarão dos jogos de verão (cada
//delegação tem 10 atletas). Depois de preenchida a matriz, escrever a
//maior altura de cada delegação
#include <stdio.h>
#include<stdlib.h>
int main(){
    int n=2,m=4,i=0,j=0;
    float matriz_altura[n][m],maior_altura=0;

    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Digite a altura do atleta %d, da delegacao %d : ",j,i);
            scanf("%f",&matriz_altura[i][j]);
        }
        
    }

    for (i=0;i<n;i++){

        printf("Analisando delegacao %d\n : " ,i);

        for(j=0;j<m;j++){           
            if(j==0){
                maior_altura= matriz_altura[i][j];
            }

            if(maior_altura<matriz_altura[i][j]){
                maior_altura=matriz_altura[i][j];            
            }
        }

        printf("A maior altura da delegação [%d], foi: [%f][%.2f\n]: ",i, maior_altura);

    }
     
    return 0;
               
            
}