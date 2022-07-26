#include <stdio.h>

int main() {
  
    //determinacao das variaveis e/ou inicializacao
    int x, y;
    int divisao;
    
    //entrada de dados
    printf("entre o primeiro numero p realizar a divisao:\n");
    scanf("%i", &x);
    printf("entre com o segundo numero p realizar a divisao:\n");
    scanf("%i", &y);
    
    //processamento de dados
    divisao = x / y;
    
    //saida de dados
    printf("a divisao eh: %i", divisao);
}
