/*25. Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de
dias deste mês.*/

#include <stdio.h>
int main (){
int mes;

	printf("entre com um mes (1 a 12) e descubra a qtd de dias deste mes: \n");
	scanf("%d", &mes);
	
	switch(mes){
		case 1:
			printf("janeiro: 31 dias");
			break;
			case 2:
			printf("fevereiro: 28 dias");
			break;
			case 3:
			printf("marco: 31 dias");
			break;
			case 4:
			printf("abril: 30 dias");
			break;
			case 5:
			printf("maio: 31 dias");
			break;
			case 6:
			printf("junho: 30 dias");
			break;
			case 7:
			printf("julho: 31 dias");
			break;
			case 8:
			printf("agosto: 31 dias");
			break;
			case 9:
			printf("setembro: 30 dias");
			break;
			case 10:
			printf("outubro: 31 dias");
			break;
			case 11:
			printf("novembro: 30 dias");
			break;
			case 12:
			printf("dezembro: 31 dias");
			break;
	}
}
