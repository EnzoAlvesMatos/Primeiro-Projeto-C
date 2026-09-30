#include <stdio.h>

int main(){
    float num1, num2, mult, subt, soma, divi;

    printf("Digite o primeiro numero: " , num1);
    scanf("%f" , &num1);

    printf("Digite o segundo numero: " , num2);
    scanf("%f" , &num2);

    soma = num1 + num2;
    
    subt = num1 - num2;

    mult = num1 * num2;

    divi = num1 / num2;

    printf("Soma: %.2f \n" , soma);

    printf("Subtracao: %.2f \n" , subt);

    printf("Multiplicacao: %.2f \n" , mult);

    printf("divisao: %.2f \n" , divi);

    return 0;
}