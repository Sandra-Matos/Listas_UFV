//Criar um algoritmo que receba duas matrizes A (tamanho CxD) e B
//(tamanho ExF) (C, D, E e F <= 6). Esse algoritmo deve verificar se o
//produto matricial de A por B é possível (ou seja, se D = E). Caso seja
//possível, calcular o tal produto, escrevendo a matriz G (tamanho CxF)
//resultado.}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int C, D, E, F,i = 0, j = 0;
    printf("Digite o valor da linha C que seja menor ou igual a 6 : ");
    scanf("%d", &C);
    printf("Digite o valor da coluna D que seja menor ou igual a 6 : ");
    scanf("%d", &D);
    printf("Digite o valor da linha E que seja menor ou igual a 6 : ");
    scanf("%d", &E);
    printf("Digite o valor da coluna F que seja menor ou igual a 6 : ");
    scanf("%d", &F);
    int matriz_A[C][D], matriz_B[E][F];
    printf("Preencha os valores da matriz A: ");
    for (i = 0; i < C; i++)
    {
        for (j = 0; j < D; j++)
        {
            scanf("%d", &matriz_A[i][j]);
        }
    }

    printf("Preencha os valores da matriz B: ");
    for (i = 0; i < E; i++)
    {
        for (j = 0; j < F; j++)
        {
            scanf("%d", &matriz_B[i][j]);
        }
    }

    if (D == E)
    {
        int matriz_G[C][F];
        for (i = 0; i < E; i++)
        {
            for (j = 0; j < F; j++)
            {
                matriz_G[i][j] = matriz_A[i][j] * matriz_B[i][j];
                printf(" %d ", matriz_G[i][j]);
            }
        }
    }
    else
    {
        printf("O produto matricial nao e viavel.");
    }
    return 0;
}
