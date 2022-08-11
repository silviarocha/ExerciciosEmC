/*implemente um programa que solicite duas variaveis inteiras e em seguida aplique todos os operadores realacionais aos inteiros lidos
(sendo 1 - verdade ou 0 - falso)*/

#include <stdio.h>

int main() {
    //definicao de variaveis
    int a, b;
    
    //entrada de dados
    printf("entre aqui com 2 numeros inteiros: \n");
    scanf("%d %d", &a, &b);
    
    //processamento e saida de dados
    printf("O valor relacional de %d == %d: %d\n", a, b, a==b);
    printf("O valor relacional de %d < %d: %d\n", a, b, a<b);
    printf("O valor relacional de %d > %d: %d\n", a, b, a>b);
    printf("O valor relacional de %d >= %d: %d\n", a, b, a>=b);
    printf("O valor relacional de %d <= %d: %d\n", a, b, a<=b);
    printf("O valor relacional de %d != %d: %d\n", a, b, a!=b);
}
