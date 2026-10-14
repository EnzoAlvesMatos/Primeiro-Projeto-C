#include <stdio.h>

int main(){
    int num, total = 0;
    printf("Digite Um numero inteiro e se quiser parar digite 0: " , num);
    scanf("%d" , &num);
    

    while (num > 0)
    {
        total += num;
        printf("Digite Um numero inteiro e se quiser parar digite 0: " , num); 
        scanf("%d" , &num);
    }

    printf("O Total da soma de todos os numeros e %d" , total);
    return 0;
}