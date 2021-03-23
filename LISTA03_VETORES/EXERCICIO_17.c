// Escreva um algoritmo que receba dez números do usuário e armazene
//em um vetor o quadrado de cada número. Após isso, o algoritmo deve
//escrever todos os valores armazenados
#include <stdlib.h>
#include <stdio.h>
int
main ()
{
  int vetor[10], vetorquadrado[10], i;
  printf ("Digite ate dez valores: ");
  for (i = 0; i < 10; i++)
    {
      scanf ("%d", &vetor[i]);
    }
  for (i = 0; i < 10; i++)
    {
      vetorquadrado[i] = vetor[i] * vetor[i];
    }
  for (i = 0; i < 10; i++)
    {
      printf ("%d", vetorquadrado[i]);
    }
  return 0;

}