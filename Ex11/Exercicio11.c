#include <stdio.h>
#include <math.h>

int main(){

    float largura, comprimento, valor, area, valortotal;
    int quantidade;
    printf("Qual e a largura da área (em metros)? " , largura);
    scanf("%f" , &largura);

    printf("Qual e o comprimento da area em metros? " , comprimento);
    scanf("%f" , &comprimento);

    printf("Qual é o valor de cada caixa? " , valor);
    scanf("%f" , &valor);

     area = comprimento * largura;
     quantidade = area/2.5;
     valortotal = valor * quantidade;

     printf("Area Total a ser revestida: %.2f m \n" , area);

     printf("Quantidade de caixa necessarias: %d \n" , quantidade);

     printf("Custo total da compra: R$ %.2f \n" , valortotal);

     return 0;
}