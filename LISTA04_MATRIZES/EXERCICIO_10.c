//A dona do salão Sempre Bela tem uma tabela em que registra quantas
//vezes cada uma das suas cinco funcionárias realizaram cada um dos
//serviços: corte, depilação e podologia. Sabendo-se que cada funcionária
//ganha 50% do que faturou, criar um algoritmo que possa calcular e
//escrever quanto cada uma vai receber; os valores de cada serviço são,
//respectivamente R$10,00; R$15,00 e R$30,00. Dica: crie uma matriz
//5x3, sendo uma linha para cada funcionária.
#include <stdio.h>
#include <stdlib.h>
int main (){
    int n=5, m=3, matriz_manicure[n][m],i=0;
    float pagamentope,pagamentocorte,pagamentodep,total;

    for(i=0;i<n;i++){
        printf("Preencha os dados da funcionaria %d \n", i);
        printf("Digite a quantidade de pes que a funcionaria fez.\n");
        scanf("%d",&matriz_manicure[i][0]);
        printf("Digite a quantidade de corte realizado pela funcionaria.\n");
        scanf("%d",&matriz_manicure[i][1]);
        printf("Digite a quantidade de depilacao realizada.\n");
        scanf("%d",&matriz_manicure[i][2]);
    }

    for (i=0;i<n;i++){
       pagamentocorte = matriz_manicure[i][0]*10/2 ;
       pagamentodep =matriz_manicure[i][1]*15/2;
       pagamentope= matriz_manicure[i][2]*30/2;
       total=pagamentope+pagamentodep+pagamentocorte;

       printf("O pagamento total  da funcionaria %d foi %.2f:\n ",i,total);
    }

return 0;



       
            


            

}