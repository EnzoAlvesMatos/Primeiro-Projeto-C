#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    
    printf("Escreva o valor da nota 1 " , nota1);
    scanf("%f" , &nota1);
        printf("Escreva o valor da nota 2 " , nota2);
    scanf("%f" , &nota2);
        printf("Escreva o valor da nota 3 " , nota3);
    scanf("%f" , &nota3);

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / (2 + 3 + 5);
    
    printf("Sua media Ponderada e %.2f" , media);

    return 0;

}