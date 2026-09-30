#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2, d;

    printf("Digite a cordenada X do 1 ponto: " , x1);
    scanf("%f" , &x1);

    printf("Digite a cordenada Y do 1 ponto: " , y1);
    scanf("%f" , &y1);

    printf("Digite a cordenada X do 2 ponto: " , x2);
    scanf("%f" , &x2);

    printf("Digite a cordenada Y do 2 ponto: " , y2);
    scanf("%f" , &y2);

    d = sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));

    printf("A distancia entre oss pontos e %.2f ." , d);

    return 0;
}