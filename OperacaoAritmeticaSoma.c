#include <stdio.h>

int main() {
    //determinacao das variaveis e/ou inicializacao
    int x, y;
    int soma;
    
    //entrada de dados
    printf("entre o primeiro numero p realizar a somatoria:\n");
    scanf("%i", &x);
    printf("entre com o segundo numero p realizar a somatoria:\n");
    scanf("%i", &y);
    
    //processamento de dados
    soma = x + y;
    
    //saida de dados
    printf("o resultado eh: %i", soma);
}
