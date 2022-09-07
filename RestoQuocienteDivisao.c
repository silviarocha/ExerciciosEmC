/*Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles*/
#include <stdio.h>

int main() {
    int numero1, numero2, resto, quociente;
    
    printf("entre com o primeiro numero: \n");
    scanf("%d", &numero1);
    printf("entre com o segundo numero: \n");
    scanf("%d", &numero2);
    
    quociente = numero1 / numero2;
    resto = numero1 % numero2;

    printf("o quociente da divisao eh: %d\n", quociente);
    printf("o resto da divisao eh: %d\n", resto);
}
