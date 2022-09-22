/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, 
 código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. 
 Após, calcule e mostre o valor a ser pago.*/
#include <stdio.h>

int main(){
	int cop1, np1, cop2, np2;
	float vu1, vu2, valor1, valor2, valor_pago;
	
	scanf("%d%d%f", &cop1, &np1, &vu1);
	scanf("%d%d%f", &cop2, &np2, &vu1);
	
	valor1 = (np1 + vu1);
	valor2 = (np2 + vu2);
	
	valor_pago = valor1 + valor2;
	
	printf("VALOR A PAGAR = %f", valor_pago);
	
	return 0;
}
