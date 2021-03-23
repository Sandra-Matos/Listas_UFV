//4. Elabore um programa que preencha uma matriz 6x3, calcule e mostre:
//a) O maior elemento da matriz e sua respectiva posicL'C#o (linha, coluna);
//b) O menor elemento da matriz e sua respectiva posicL'C#o (linha, coluna)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 6, m = 3, i = 0, j = 0, matriz[n][m], maior = 0, menor = 0, posicao_maior_linha, posicao_maior_coluna, posicao_menor_coluna, posicao_menor_linha;
    printf("Digite 18 valores: ");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Posicao [%d][%d]= ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == 0 && j == 0)
            {
                maior = matriz[i][j];
                posicao_maior_linha = i;
                posicao_maior_coluna = j;
            }
            else if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                posicao_maior_linha = i;
                posicao_maior_coluna = j;
            }
        }
    }
    printf("Posicao de maior elemento foi [%d][%d] e o maior elemento foi:[%d]",
           posicao_maior_linha, posicao_maior_coluna, maior);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == 0 && j == 0)

            {
                menor = matriz[i][j];
                posicao_menor_linha = i;
                posicao_menor_coluna = j;
            }
            else if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                posicao_menor_linha = i;
                posicao_menor_coluna = j;
            }
        }
    }
    printf("Posicao de menor elemento foi [%d][%d] e o menor elemento foi:[%d]",
           posicao_menor_linha, posicao_menor_coluna, menor);
    return 0;
}