/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, 
 código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. 
 Após, calcule e mostre o valor a ser pago.*/
#include <stdio.h>

int main(){
	int codp1, nump1, codp2, nump2;
	float vunit1, vunit2, valor1, valor2, total;
	
	scanf("%d%d%f", &codp1, &nump1, &vunit1);
	scanf("%d%d%f", &codp2, &nump2, &vunit2);
	
	valor1 = nump1 * vunit1;
	valor2 = nump2 * vunit2;
	
	total = valor1 + valor2;
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	
	return 0;
}
