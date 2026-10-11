#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, nota5, mediamaior, mediatur;
    int resp;

    do{ 
         printf("Digite a nota do estudante 1: " ,  nota1);
    scanf("%f" , &nota1);

            printf("Digite a nota do estudante 2: " , nota2);
    scanf("%f" , &nota2);

            printf("Digite a nota do estudante 3: " ,  nota3);
    scanf("%f" , &nota3);

            printf("Digite a nota do estudante 4: " ,  nota4);
    scanf("%f" , &nota4);

            printf("Digite a nota do  estudante 5: " , nota5);
    scanf("%f" , &nota5);


        if(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 && nota3 >= 0 && nota3 <= 10 && nota4 >= 0 && nota4 <= 10 && nota5 >= 0 && nota5 <= 10){
     mediatur = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
      printf("Total da media da turma e %.2f \n" , mediatur);

   }else{
    printf("Alguma nota esta invalida \n");
   }
                  
           
  

         

   
printf(" digite 1 para continuar ou 2 para parar: " , resp);
  scanf("%d" , &resp);
   

    }while(resp == 1);


        
           

  return 0;
    

}