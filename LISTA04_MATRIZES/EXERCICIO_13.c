
//. Criar um algoritmo que leia uma matriz M de tamanho NxN e verifique e
//mostre na saída se tal matriz é ou não simétrica (Mt = M, ou a matriz
//original é igual à sua transposta)

#include <stdio.h>
#include <stdlib.h>
int main(){
    int M, N, i = 0, j = 0,cont=0,compara=0;

    printf("Digite o valor para a linha M e para coluna N: ");
    scanf("%d%d", &N, &M);

    int matrizM[M][N];
    int matrizT[N][M];
    printf("Digite os elementos da matriz: ");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &matrizM[i][j]);
        }
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (matrizM[i][j] != matrizM[j][i])
            {
                cont=cont+1;
                
            }
            
        }
    }
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            matrizT[i][j]= matrizM[j][i];
        }
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if(matrizT[i][j]!= matrizM[i][j])
                compara=compara+1;

            
        }
    }
    if(cont>0)
        printf("Nao e simetrica.");
    else
        printf("É simetrica.");

    if(M!=N){
        printf("Nao e igual a sua transposta");

    } else if(compara>0)
        printf("Nao e igual a sua transposta.");
    else
        printf("E igual a sua transposta.");
    return 0;
}