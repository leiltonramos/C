#include<stdio.h>

int main(){

    int num1, num2, adi, sub, mul, div;

    printf("Digite o primeiro numero:\n>");
    scanf("%d", &num1);

    printf("Digite o segundo numero:\n>");
    scanf("%d", &num2);

    adi = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("A adicao eh: %d\n",           adi);
    printf("A subtracao eh: %d\n",        sub);
    printf("A multiplicacao eh: %d\n",    mul);
    printf("A divisao eh: %d\n",          div);

    return(0);
}