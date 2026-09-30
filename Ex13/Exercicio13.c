#include <stdio.h>

int main(){
    float num1, num2, num3, media;

    printf("Digite a primeira nota: " , num1);
    scanf("%f" , &num1);

    printf("Digite a segunda nota: " , num2);
    scanf("%f" , &num2);

    printf("Digite a terceira nota: " , num3);
    scanf("%f" , &num3);

    media = ((num1 * 1) + (num2 * 2) + (num3 * 4 )) / (1 + 2 + 4);

    printf("A media ponderada e %.2f ." , media);

    return 0;
}