#include <stdio.h>

int main(){
    float raio;
    float pi = 3.14;
    float perimetro;
    printf("Qual a medida do Raio (em CM)? \n ");
    scanf("%f" , &raio);
     perimetro =  2 * pi * raio;
    printf("O perimetro da circunferencia é %.2f CM \n" , perimetro);
    return 0;
}