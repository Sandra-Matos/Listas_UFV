// prefeitura de Florestal abriu uma linha de crédito de empréstimo
//para os funcionários da UFV. O valor máximo da prestação não
//poderá ultrapassar 30% do salário bruto. Fazer um algoritmo que
//permita entrar com o salário bruto do funcionário e o valor da
//prestação, e informar se o empréstimo pode ou não ser concedido.

#include<stdio.h>
#include <stdlib.h>
int main (){
    float salario_bruto, prestacao,emprestimo;
    printf("Digite o valor do salario bruto: ");
    scanf("%f",&salario_bruto);
    printf ("Digite o valor desejado para a prestacao:");
    scanf("%f",&prestacao);
    emprestimo= salario_bruto*(30/100)+salario_bruto;
    if(prestacao>emprestimo){
         printf("Nao e possivel conceder o emprestimo.");

    }
    else if(prestacao<emprestimo){
        printf("E possivel conceder o emprestimo.");

    }
        
    return 0;
}