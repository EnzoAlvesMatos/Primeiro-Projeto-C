#include <stdio.h>

int main(){
    int quantalu, num = 1;
    float media, nota, total;


   do  { 
  
           
    printf("Qual a quantidade de alunos " , quantalu);
    scanf("%d" , &quantalu);

            printf("Qual a nota do aluno %d" , num, nota );
        scanf("%f" , &nota);
                               total += nota;
            num ++;
              
        if(nota < 0 && nota > 10 ){

 printf("nota invalida");
    }
    media = total / quantalu;
    

    }while (num == quantalu);

      
    printf("Media das notas igual a %.2f" , media);

    return 0;
}