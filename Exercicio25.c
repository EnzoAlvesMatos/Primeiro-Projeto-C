#include <stdio.h>

int main(){
    float nota1, nota2, mediaar, mediapd;
    char tipoMedia;

    printf("Tipo de media (A - P)? " , tipoMedia);
    scanf("%c" , &tipoMedia);

    printf("Digite a primeira nota: " , nota1);
    scanf("%f" , &nota1);

    printf("Digite a segunda nota: " , nota2);
    scanf("%f" , &nota2);

    switch(tipoMedia){
        case 'P':
        case 'p':
         mediapd = ((nota1 * 3) + (nota2 * 7) ) / (3 + 7);
        printf("Media calculada: %.2f" , mediapd);
        break;
        case 'A':
        case 'a':
        mediaar = (nota1 + nota2) / 2;
        printf("Media calculada: %.2f" , mediaar); 
        break;
        default : 
           printf("Tipo de media nao disponivel");
         
    }
}