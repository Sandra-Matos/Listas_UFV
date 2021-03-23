//Elabore um algoritmo que leia os valores e realize a soma de cada um
//dos elementos de dois vetores de 5 posições e armazene o resultado
//em um terceiro vetor, que deve ter seus elementos apresentados.
#include <stdlib.h>
#include <stdio.h>
int main(){
    int vetor1[5],vetor2[5],vetorsoma[5],i;
    printf("Digite cinco valores para o vetor um.");
    for(i=0;i<5;i++){
        scanf("%d",&vetor1[i]);

    }
    printf("Digite cinco valores para o vetor dois.");
    for(i=0;i<5;i++){
        scanf("%d",&vetor2[i]);
        
    }
    for(i=0;i<5;i++){
        vetorsoma[i]=vetor1[i]+vetor2[i];

    
        
    }
    for(i=0;i<5;i++){
        printf("%d",vetorsoma[i]);
    }

    return 0;
}
