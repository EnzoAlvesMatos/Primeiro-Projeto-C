#include <stdio.h>

int main(){
    float nota1, nota2, media;

    printf("Digite a primeira nota: " , nota1);
    scanf("%f" , &nota1);

    printf("Digite a segundo nota: " , nota2);
    scanf("%f" , &nota2);

    media = (nota1 + nota2) / 2;

    if(media >= 6 ){
    printf("Aprovado");
    }else{
        printf("Reprovado");
    }

    return 0;
}