#include <stdio.h>

int main(){
    char hospedagem;
    float totalhs;
    int diaria;

    printf("Qual o tipo de hospedagem (S - D - T)? " , hospedagem);
    scanf("%c" , &hospedagem);

    printf("Qual a quantidade de Diarias? " , diaria);
    scanf("%d" , &diaria);

    if(hospedagem == 'S' || hospedagem == 's'){
        totalhs = 300 * diaria;
        printf("Valor total a pagar R$ %.2f" , totalhs);
    }
    else if(hospedagem == 'D' || hospedagem == 'd'){
        totalhs = 450 * diaria;
        printf("Valor total a pagar R$ %.2f" , totalhs);
    }
    else if(hospedagem == 'T' || hospedagem == 't'){
        totalhs = 500 * diaria;
        printf("Valor total a pagar R$ %.2f" , totalhs);
    }
    else{
        printf("Tipo invalido");
    }

    return 0;

}