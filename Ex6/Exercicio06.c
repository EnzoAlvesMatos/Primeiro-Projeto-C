#include <stdio.h>
int main(){
    int manha, tarde, total;

 printf("Quantidade recebida pela manha? " , manha);
 scanf("%d" , &manha);

 printf("Quantidade recebida a tarde? " , tarde);
 scanf("%d" , &tarde);

 total = tarde + manha;

 printf("Total de produtos recebidos no dia: %d" , total);

 return 0;
}