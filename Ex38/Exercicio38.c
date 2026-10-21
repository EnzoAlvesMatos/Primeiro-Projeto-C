#include <stdio.h>

int main(){
    int num = 0, resp = 0;
    float media, nota, total = 0, quantalu = 0;

 


    do{
            printf("Qual a quantidade de alunos: " , quantalu);
scanf("%f" , &quantalu);



         while (quantalu != num)  { 
        for ( num = 1; num <= quantalu; num++)
    {


    

 printf("Qual a nota do aluno %d: " , num, nota );
        scanf("%f" , &nota);

    
    if(nota < 0 && nota > 10 ){
         printf("Digite novamente a nota do aluno %d: " , num, nota );
        scanf("%f" , &nota);
    }
}
           
                     
               total += nota;  
                 num ++;
   media = num / total;
  
      printf("Media das notas igual a %.2f" , media);  
 
      
      printf("Digite 1 para continuar e 11 para parar " , resp);
      scanf("%d" , &resp);

}          
}while (resp == 1);




    

      
   

    return 0;
}