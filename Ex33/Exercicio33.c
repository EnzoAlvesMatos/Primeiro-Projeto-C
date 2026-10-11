#include <stdio.h>

int main(){
    int num;
    printf("Digite Um numero inteiro e se quiser parar digite 0: " , num);
    scanf("%d" , &num);
    

    while (num > 0)
    {
        printf("Digite Um numero inteiro e se quiser parar digite 0: " , num); 
        scanf("%d" , &num);
    }

    return 0;
}