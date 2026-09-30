#include <stdio.h>
int main(){
    float Peso;
    float QtAgua;

    printf("Digite a massa corporal (em KG)" , Peso);
    scanf("%f" , &Peso);

    QtAgua = Peso * 35;

    printf("Quantidade aproximada de Agua recomendada por dia: %.2f litros" , QtAgua);

    return 0;
}