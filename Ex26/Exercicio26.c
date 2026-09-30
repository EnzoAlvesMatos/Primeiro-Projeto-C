#include <stdio.h>

int main(){
    char cpf[15];
    float preco, total = 0.0;

    printf("Digite seu CPF: ", cpf);
    scanf("%14s" , &cpf);
     printf("Digite o preco do Produto ou Digite 0 para encerrar: " , preco);
     scanf("%f" , &preco);

     while (preco > 0)
     {
       total += preco;
       printf("Digite o preco do Produto ou Digite 0 para encerrar: ");
       scanf("%f" , &preco);
     }

     printf("\n --Resultado da Compra-- \n");
     printf("CPF Cadastrado: %s \n" , cpf);
     printf("Preco Total da compra: %.2f" , total);

     return 0;
     
    
}