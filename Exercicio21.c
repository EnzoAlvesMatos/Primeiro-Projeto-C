#include <stdio.h>

int main(){
    float valorParcela, valorCompra, valorFinal;
    int qtParcelas, juros;

    printf("Entre com valor da compra ", valorCompra);
    scanf("%f" , &valorCompra);

    printf("Entre com a quantidade de parcelas " , qtParcelas);
    scanf("%d" , &qtParcelas);

    if(qtParcelas == 2){
        valorFinal = valorCompra + valorCompra * 3 / 100;
        valorParcela = valorFinal / qtParcelas;
        printf("O valor de cada parcela e R$%.2f \n Valor Total da Compra R$%.2f" , valorParcela, valorFinal);
    }
    else if(qtParcelas == 4){
        valorFinal = valorCompra + valorCompra * 7 / 100;
        valorParcela = valorFinal / qtParcelas;
        printf("O valor de cada parcela e R$%.2f \n Valor Total da Compra R$%.2f" , valorParcela, valorFinal); 
    }
    else if(qtParcelas == 6){
        valorFinal = valorCompra + valorCompra * 9 / 100;
        valorParcela = valorFinal / qtParcelas;
        printf("O valor de cada parcela e R$%.2f \n Valor Total da Compra R$%.2f" , valorParcela, valorFinal);        
    }
    else if(qtParcelas == 8){
        valorFinal = valorCompra + valorCompra * 12 / 100;
        valorParcela = valorFinal / qtParcelas;
        printf("O valor de cada parcela e R$%.2f \n Valor Total da Compra R$%.2f" , valorParcela, valorFinal);       
    }
    else{
        printf("Nao podemos parcelar nesta quantidade");
    }
    return 0;
}