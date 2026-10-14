#include <stdio.h>

int main(){
    int num = 0, soma = 0;

          printf("Digite um numero e aperte 0 para parar " , num);
        scanf("%d" , &num);
     while (num > 0){
        if (num % 2 == 1)  {
        soma += num ;
        }
        printf("Digite um numero e aperte 0 para parar " , num);
        scanf("%d" , &num);



         

    }

      
        printf("A soma dos numeros impares e igual a %d" , soma);

   
 
    
}