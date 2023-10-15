#include <stdio.h>

int main(){

    float num1, num2;

    printf("informe dois valores: ");
    scanf("%f %f", &num1, &num2);


    float resultado;

    resultado = num1 + num2 ;
    printf("\resultad0 da adicao = %f", resultado);

    resultado = num1 - num2;
    printf("\resultado da subtracao = %f", resultado);

    resultado = num1 * num2 ;
    printf("\resultado da multiplicacao = %f", resultado);

    resultado = num1 / num2;
    printf("\resultado da divisao = %f", resultado);

    return 0;

}
