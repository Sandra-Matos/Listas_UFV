//Crie um algoritmo que leia um vetor de 6 posições o qual o usuário
//digitará os valores, e em seguida conte quantos números são positivos
//e quantos são negativos e escreva essa informação
#include <stdio.h>
#include <stdlib.h>
int main (){
     int vetor[6],i,positivo, negativo;
     printf("Digite ate seis valores: ");
     positivo=0;
     negativo=0;
     for(i=0;i<6;i++)
     {
          scanf("%d",&vetor[i]);
          if(vetor[i]>=0){
               positivo =positivo+1; 
          }else if (vetor[i]<0){
               negativo= negativo+1;
          }
     }          
     printf("Os numeros positivos sao: %d \n", positivo);
     printf("Os numeros negativos sao: %d\n ", negativo);

              
      return 0;    
     


}
   
