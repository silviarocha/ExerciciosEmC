/*Declare o vetor "carros" com 5 posições do tipo da estrutura definida abaixo. Faça a leitura de "carros" e em seguida mostre seu conteúdo na tela. 
    a. nome (máximo 10 caracteres)
	b. marca (máximo 15 caracteres)
	c. ano (inteiro)
	d. cor(máximo 10 caracteres)
	e. preço (real)*/

#include <stdio.h>
struct carros{
    char nome[10];
    char marca[15];
    int ano;
    char cor[10];
    float preco;
};
struct carros tipos_de_carros;

int main() {
    //entrada de dados da estrutura
    printf("\n----------- carros -----------\n");
    
    printf("Nome: \n");
    fgets(tipos_de_carros.nome, 10, stdin);
    
    printf("marca: \n");
    fgets(tipos_de_carros.marca, 15, stdin);
    
    printf("ano: \n");
    scanf("%d", &tipos_de_carros.ano);
    
    printf("cor: \n");
    fgets(tipos_de_carros.cor, 10, stdin);
    
    printf("preco: \n");
    scanf("%5.2f", &tipos_de_carros.preco);
    
    //lendo dados da estrutura
     printf("\n----------- resultado -----------\n");
     
     printf("Nome: %s \n", tipos_de_carros.nome);
     printf("marca: %s \n", tipos_de_carros.marca);
     printf ("ano: %d \n", tipos_de_carros.ano);
     printf ("cor: %s \n", tipos_de_carros.cor);
     printf ("preco: %f \n", tipos_de_carros.preco);
}
