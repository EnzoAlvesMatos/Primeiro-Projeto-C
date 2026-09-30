#include <stdio.h>

int main(){
    float nota;
    int frequencia;

    printf("Qual a media final do aluno? " , nota);
    scanf("%f" , &nota);

    printf("Qual o pencentual de frequencia? " , frequencia);
    scanf("%d" , &frequencia);

    if (nota < 6 || frequencia < 75){
        printf("Reprovado");
    }
 else {
        printf("Aprovado");
     }

     return 0;
}