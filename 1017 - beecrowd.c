#include <stdio.h>

int main(){
	
	int km, velocidade, tempo;
	float litros;
	
	scanf("%d%d", &velocidade, &tempo);

	km = tempo/velocidade;
	litros = km * 12;
	
	printf("%.3f\n", litros);
	
	return 0;
}
