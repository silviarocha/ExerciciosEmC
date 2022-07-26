#include <stdio.h>

int main() {
    //determinacao das variaveis e/ou inicializacao
    int x, y;
    int multiplicacao;
    
    //entrada de dados
    printf("entre o primeiro numero p realizar a multiplicacao:\n");
    scanf("%i", &x);
    printf("entre com o segundo numero p realizar a multiplicacao:\n");
    scanf("%i", &y);
    
    //processamento de dados
    multiplicacao = x * y;
    
    //saida de dados
    printf("o resultado eh: %i", multiplicacao);
}
