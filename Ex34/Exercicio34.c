#include <stdio.h>

int main(){
    int idade1, idade2, idade3, idade4, idade5, media;

    printf("Digite a idade da primeira pessoa: " , idade1);
    scanf("%d" , &idade1);
    printf("Digite a idade da Segunda pessoa: " , idade2);
    scanf("%d" , &idade2);
    printf("Digite a idade da Terceira pessoa: " , idade3);
    scanf("%d" , &idade3);
    printf("Digite a idade da Quarta pessoa: " , idade4);
    scanf("%d" , &idade4);
    printf("Digite a idade da Quinta pessoa: " , idade5);
    scanf("%d" , &idade5);

    media = (idade1 + idade2 + idade3 + idade4 + idade5) / 5;

    printf("A media entre essas idades e igual a %d" , media);

    return 0;
}