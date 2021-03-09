//. No sistema imperial, frequentemente são utilizadas as seguintes
//medidas lineares:
//1 pé = 12 polegadas
//1 jarda = 3 pés
//1 milha = 1760 jardas
//Baseado no fato de que 1 polegada equivale a 25.3995 milímetros no 
//sistema métrico, escreva um programa que converta comprimentos 
//expressos em milhas, jardas, pés e polegadas em quilômetros. O 
//programa deve ler um valor real do teclado, e a informação da medida
//desse valor. Como saída, deve mostrar o valor em quilômetros.
#include <stdio.h>
#include <stdlib.h>
int main (){
    float  polegada, pes, jardas, milimetro, milha, distancia, trajetoria;
    int medida;

    
    polegada = 25.3995;
    pes = 12* polegada;
    jardas = 3* pes;
    milha = 1760*jardas;
    trajetoria=0;   

    printf("Digite a opcao desejada:\n1:pe\n2:jarda\n3:milha\n4:polegada \npara converter em KM: ");
    scanf ("%d", &medida);
    printf ("Digite a distância real a percorrer: ");
    scanf("%f",&distancia);

    if (medida == 1){
        trajetoria= (pes*distancia)/1000000;
        printf("A medida desejada em KM é: %f", trajetoria);
    } 
    else if(medida == 2) {
        trajetoria= (jardas*distancia)/1000000;
    }
    else if(medida == 3) {
        trajetoria = (milha*distancia)/1000000;
        printf("A medida desejada em KM e: %f", trajetoria);
    } 
    else if (medida == 4){
        trajetoria = (polegada*distancia)/1000000;
        printf("A medida desejada em KM e:%f ", trajetoria);

    }
    return 0;
     
     

       

}