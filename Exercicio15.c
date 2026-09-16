#include <stdio.h>
#include <math.h>

int main(){
    float  a, b, c;
    float delta, x1, x2;

    printf("Digite o valor de a: ", a);
    scanf("%f", &a);

    printf("Digite o valor de b: ", b);
    scanf("%f", &b);

    printf("Digite o valor de c: ", c);
    scanf("%f", &c);

    delta = pow(b, b) - (4 * a * c);

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("Raizes de equacao: \n x1 = %.2f \n x2 = %.2f", x1, x2);

    return 0;
}