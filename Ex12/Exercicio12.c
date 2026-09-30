#include <stdio.h>

int main(){
    float num1, num2, num3, num4, media;

    printf("Digite o primeiro valor:" , num1);
    scanf("%f" , &num1);

    printf("Digite o segundo valor:" , num2);
    scanf("%f" , &num2);

    printf("Digite o terceiro valor:" , num3);
    scanf("%f" , &num3);

    printf("Digite o quarto valor:" , num4);
    scanf("%f" , &num4);

    media = (num1 + num2 + num3 + num4)/4;

    printf("A media aritmetica e %.2f" , media);

    return 0;
}