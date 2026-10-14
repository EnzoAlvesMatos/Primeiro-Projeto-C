#include <stdio.h>

int main(){
    int quantalu = 0, num = 0;
    float media, nota, total;
    printf("Qual a quantidade de alunos: " , quantalu);
scanf("%d" , &quantalu);
  while (quantalu != num)  { 


    

            printf("Qual a nota do aluno %d: " , num, nota );
        scanf("%f" , &nota);
                               
            num ++;
               total += nota;  
   media = total / quantalu;
              
        if(nota < 0 && nota > 10 ){

 printf("nota invalida");
    }
   
    

    };

      
    printf("Media das notas igual a %.2f" , media);

    return 0;
}