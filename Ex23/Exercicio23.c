#include <stdio.h>

int main(){
    float valorParcela, valorCompra, valorFinal;
    int qtParcelas, juros;

    printf("Entre com valor da compra ", valorCompra);
    scanf("%f" , &valorCompra);

    printf("Entre com a quantidade de parcelas " , qtParcelas);
    scanf("%d" , &qtParcelas);
     
    switch (qtParcelas){
    case 2: juros = 3;
        break;
   case 4: juros = 7;
      break;
   case 6: juros = 3;
        break;
   case 8: juros = 3;
        break;
    
    default : juros = -1;

        break;
    }
    if(juros == -1){
        printf("Numero de Parcelas incorreto");
    }
    else{
       valorFinal = valorCompra + valorCompra * juros / 100;
        valorParcela = valorFinal / qtParcelas;
        printf("O valor de cada parcela e R$%.2f \n Valor Total da Compra R$%.2f" , valorParcela, valorFinal); 
    }
}