#include <stdio.h>
#include <math.h>

int main(){
    float imc, peso, altura;

    printf("Calculadora de IMC \n");

    printf("Qual e o seu Peso: ", peso);
    scanf("%f", &peso);

    printf("Qual e a sua altura: ", altura);
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    if(imc < 20){
        printf("Abaixo do Peso");
    }
    else if(imc >= 20 && peso <= 24.9){
        printf("Peso Normal");
    }
    else if(imc >= 25 && imc <= 29.9){
        printf("Sobrepeso");
    }
    else if(imc >= 30 && imc <= 39.9){
        printf("Obeso");
    }
    else{
        printf("Obeso morbido");
    }

    return 0;
}