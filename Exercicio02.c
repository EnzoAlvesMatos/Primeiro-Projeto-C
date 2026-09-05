#include <stdio.h>
int main(){
    float comprimento;
    float largura;
    float area;
    float perimetro;

    printf("Qual o Comprimento do Jardim (m)? ", comprimento);
    scanf("%f" , &comprimento);
    printf("Qual a Largura do Jardim (m)? " , largura);
    scanf("%f" , &largura);

    perimetro = 2 * (comprimento + largura);
    area = comprimento * largura;
    
    printf("Perimetro do Jardim: %.2f m \n" , perimetro);
    printf("Area do Jardim: %.2f m" , area);

    return 0;
}