//21. Escreva um programa que leia um número e exiba se ele é positivo ou negativo.
#include <stdio.h>

int main (){
	
int numero;

	printf("entre com um numero: \n");
	scanf("%d", &numero);
	
	if(numero >= 0){
		printf("eh positivo");
	}if (numero <= 0){
		printf("eh negativo");
	}
}
