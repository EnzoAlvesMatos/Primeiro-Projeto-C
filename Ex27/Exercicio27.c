#include <stdio.h>

int main(){
   int idade;
   
   printf("Qual sua idade: " , idade);
   scanf("%d" , &idade);

   if(idade < 18 && idade >= 16 || idade > 70 ){
    printf("voto facultativo");
   }
   else if(idade >= 18 && idade <= 70){
    printf("Voto Obrigatorio");
   }
   else{
    printf("Nao pode votar");
   }

   return 0;
}