/*Ler as notas da 1a e 2a avaliações de um aluno. Calcular a média aritmética simples e 
escrever uma mensagem que diga se o aluno foi ou não aprovado (considerar que nota igual ou maior que 6 o aluno é aprovado). 
Escrever também a média calculada.*/

#include <stdio.h>
int main() {
    //definicao das variaveis
    float nota1, nota2, media_aritmetica;
    
    //entrada de dados
    printf("entre com a nota da 1a avaliacao:\n");
    scanf("%f", &nota1);
    printf("entre com a nota da 2a avaliacao:\n");
    scanf("%f", &nota2);
    
    //processamento de dados
    media_aritmetica = nota1 + nota2 / 2;
    
    if(media_aritmetica >= 6){
        printf("Aluno aprovado: %2.f", media_aritmetica);
    } else{
        printf("Aluno não aprovado: %2.f", media_aritmetica);
    }
    
}
