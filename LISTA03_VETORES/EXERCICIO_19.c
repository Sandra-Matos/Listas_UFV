 //Escreva um algoritmo que receba a altura de 10 atletas. Esse
//algoritmo deve escrever a altura daqueles atletas que tem altura maior
//que a média de todos eles.
#include <stdio.h>
#include<stdlib.h>
int
main ()
{
  double vetor_altura[10], soma, media;
  int quant, i;
  quant = 0;
  printf ("Digite a altura dos dez atletas: ");
  for (i = 0; i < 10; i++)
    {
      scanf ("%f", &vetor_altura[i]);
      soma = soma + vetor_altura[i];


    }
  media = soma / 10;
  for (i = 0; i < 10; i++)
    {
      if (vetor_altura[i] > media)
	quant = quant + 1;
    }

  if (quant > 0)
    {
      double vetormaior[quant];
      int contador = 0;
      for (i = 0; i < 10; i++)
	{
	  if (vetor_altura[i] > media)
	    {
	      vetormaior[contador] = vetor_altura[i];
	      contador = contador + 1;
	    }
	  for (i = 0; i < quant; i++)
	    {
	      printf ("%f", vetormaior[i]);
	    }
	  return 0;



	}