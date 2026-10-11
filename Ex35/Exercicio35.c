#include <stdio.h>

int main(){
    float fracao, total = 0.0, num = 1;
    

    printf("S = 1/ %.0f e para parar digite 0 " , num);
    scanf("%f" , &num);

    while (num > 0)
    {
        total += fracao;
        fracao = (1 / num) ;
           printf("S = 1/%.0f e para parar digite 0 " , num);
    scanf("%f" , &num);
    }

    printf("Resultado = %.2f" , total);

    return 0;
    
}