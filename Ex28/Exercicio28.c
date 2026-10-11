#include <stdio.h>

int main(){
    float dolar = 5.00, reais, dinheiro;

    printf("Quantos reias voce possui: " , reais);
    scanf("%f" , &reais);

    dinheiro =  reais / dolar ;
    
    printf("O Valor que voce tem em dolar e %.2f" , dinheiro);

    return 0;
}