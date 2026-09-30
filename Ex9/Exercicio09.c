#include <stdio.h>

int main(){
    float potencia, consumo;
    int hora;

    printf("Potencia do equipamento (W)? " , potencia);
    scanf("%f" , &potencia);

    printf("Horas de uso por dia? ") , hora;
    scanf("%d" , &hora);

    consumo = (potencia*hora*30)/1000;

    printf("Consumo mensal: %.2f KWH" , consumo);

    return 0;
}