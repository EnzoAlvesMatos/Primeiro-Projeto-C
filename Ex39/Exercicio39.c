#include <stdio.h>
int main(){
    int codigo, etp = 0, i = 0, resp = 0, total = 0;
    float media;

   printf("MISSAO ORBITAL \n");

   printf("Codigo do cadete: " , codigo);
   scanf("%d" , &codigo);

   
    do
    {for(i = 1; i <= 3; i++){
               
              printf("Pontuacao etapa %d: ", i , etp);
      scanf("%d" , &etp);
      
        while (etp < 0 || etp > 100) {
          
            resp = 1;
            break;
           }      

total += etp; 
media = total / 3;

        }
               if(resp == 1){
        printf("invalido");
        break;
       }
    printf("Cadete %d \n" , codigo);
    printf("Pontuacao Total: %d \n" , total);
  if(total == 300){
    printf("PONTUACAO MAXIMA! \n");
    printf("Comandante da missao \n");
    printf("Treinamento concluido com excelencia.");
}
 else if(media >= 85.0 && media <= 99.9){

    printf("Comandante da missao \n");
    printf("Treinamento concluido com excelencia.");
}
else if(media >= 70.0 && media <= 84.99){
    printf("Piloto aprovado \n");
    printf("Cadete autorizado para a missao.");
}
else if(media >= 50.0 && media <= 69.99){
     printf("Cadete em recuperacao \n");
    printf("Novo treinamento recomendado.");   

}
else{
       printf("Treinamento reiniciado \n");
    printf("Cadete ainda não autorizado.");   
}
printf("Digite 1 para continuar e 0 para encerrar" , resp);
scanf("%d" , &resp);
        
        

    } while (resp == 1);
    


}