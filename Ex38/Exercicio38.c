#include <stdio.h>

int main(){
    int quantalu = 0, num = 0;
    float media, nota, total;
    printf("Qual a quantidade de alunos: " , quantalu);
scanf("%d" , &quantalu);
  while (quantalu != num)  { 


    do{
        if(nota >= 0 && nota <= 10 ){
 printf("Qual a nota do aluno %d: " , num, nota );
        scanf("%f" , &nota);

    }
    else if(nota < 0 && nota > 10 ){
         printf("Digite novamente a nota do aluno %d: " , num, nota );
        scanf("%f" , &nota);
    }
           
                               
            num ++;
               total += nota;  
   media = total / quantalu;
              
}while (condition)


   
    

    };

      
    printf("Media das notas igual a %.2f" , media);

    return 0;
}