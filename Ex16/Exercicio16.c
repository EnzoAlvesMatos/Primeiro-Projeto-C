#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ", num);
    scanf("%d" , &num);

    if(num % 2 == 0){
        printf("Numero Par");
    }else{
        printf("Numero Impar");
    }

    return 0;
}