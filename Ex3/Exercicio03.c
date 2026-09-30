#include <stdio.h>

int main(){
 float meses;
 float semanas;

 printf("Qual a quantidade de semanas de gestacao? " , semanas);
 scanf("%f" , &semanas);

 meses = semanas / 4.34;

 printf("Tempo de gestacao aproximado: %.2f meses" , meses);

 return 0;


}