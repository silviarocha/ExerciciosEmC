#include <stdio.h>

int main(){
	
	int tempo, velocidade;
  float litros, km;
  
  scanf("%d%d", &tempo, &velocidade);
  
	km = tempo*velocidade;
	
	litros = km/12;
	
	printf("%.3f\n", litros);
	
	return 0;
}
