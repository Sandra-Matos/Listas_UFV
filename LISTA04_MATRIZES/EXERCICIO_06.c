// Faça um programa que preencha uma matriz 5 x 5, calcule e mostre a
//média dos elementos da diagonal principal.
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i = 0, j = 0, n = 5, soma = 0, matriz[n][n];
    float  media = 0;
    printf("Digite 25 valores: ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j)
            {
                soma = soma + matriz[i][j];
                media = soma / 25;
            }
        }
    }

    printf("A media da diagonal principal e: %.1f", media);

    return 0;
}
