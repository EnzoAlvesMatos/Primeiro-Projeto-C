#include <stdio.h>

int main(){
    int num = 0;

    printf("Qual sequencia de numero você quer são pares" , num);
    scanf("%d" , &num);

    while (num <= 50)
    {
       if(num % 2 == 0) {
       printf("Numero %d Par " , num);
       
    }
    else{
       printf("Numero %d Impar " , num);
    }
    num++;
}
}