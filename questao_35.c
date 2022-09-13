/*35. Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana
correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um
dia da semana, mostre uma mensagem de erro.*/

#include <stdio.h>
int main (){
int mes;

	printf("entre com numero inteiro e descubra a qual dia ele pertence: \n");
	scanf("%d", &mes);
	
	switch(mes){
		case 1:
			printf("domingo");
			break;
			case 2:
			printf("segunda");
			break;
			case 3:
			printf("terca");
			break;
			case 4:
			printf("quarta");
			break;
			case 5:
			printf("quinta");
			break;
			case 6:
			printf("sexta");
			break;
			case 7:
			printf("sabado");
			break;
			default:
				printf("nao existe");
	}
}
