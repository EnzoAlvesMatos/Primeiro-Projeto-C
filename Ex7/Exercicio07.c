#include <stdio.h>

int main(){
    int hora, minuto, total;

    printf("Hora? " , hora);
    scanf("%d" , &hora);

    printf("Minutos? " , minuto);
    scanf("%d" , &minuto);

    total = (hora * 60) + minuto;

    printf("Ja se passaram %d minutos desde o inicio do dia." , total);

    return 0;
}