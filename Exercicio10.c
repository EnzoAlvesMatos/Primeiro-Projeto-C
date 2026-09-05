#include <stdio.h> 
#include <math.h>

int main(){
    float peso, altura, imc;

    printf("Qual é o peso da pessoa em Kg? " , peso);
    scanf("%f" , &peso);

    printf("Qual e a altura da pessoa em metros? " , altura);
    scanf("%f" , &altura);

    imc = peso/ pow(altura, 2);

    printf("O indice de Massa Corporal e %.2f Kg/m." , imc);

    return 0;
}