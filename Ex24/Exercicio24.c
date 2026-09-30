#include <stdio.h>

int main(){
    char hospedagem;
    float totalhs;
    int diaria;

    printf("Qual o tipo de hospedagem (S - D - T)? " , hospedagem);
    scanf("%c" , &hospedagem);

    printf("Qual a quantidade de Diarias? " , diaria);
    scanf("%d" , &diaria);

    switch(hospedagem){
    case 'S':
    case 's':
     totalhs = 300 * diaria;
        printf("Valor total a pagar R$ %.2f" , totalhs);
        break;
     case 'D':
     case 'd':
        totalhs = 450 * diaria;
        printf("Valor total a pagar R$ %.2f" , totalhs);
        break;
     case 'T':
     case 't':
       totalhs = 500 * diaria;
        printf("Valor total a pagar R$ %.2f" , totalhs);
         break;
     default : 
       printf("Hospedagem errada");
    }
}