/* Faça um programa em Python que leia três notas de um aluno, calcule e escreva a média final deste aluno. 
Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5: */
//calculo media ponderada: "mediafinal = n1*2 + n2*3 = n3*5 / 10"

#include <stdio.h>
int main() {
    //def. variaveis
   float nota1, nota2, nota3, mediaFinal;
   
   //ent. de dados
   
   //entrando c/ a nota 1
   printf("entre com a nota 1:\n");
   scanf("%f", &nota1);
   //entrando c/ a nota 2
   printf("entre com a nota 2:\n");
   scanf("%f", &nota2);
   //entrando c/ a nota 3
   printf("entre com a nota 3:\n");
   scanf("%f", &nota3);
   
   //processamento de dados
   mediaFinal = nota1*2 + nota2*3 + nota3*5 / 10;
   
   //saida de dados
   printf("a media final eh: %2.f\n", mediaFinal);
}
