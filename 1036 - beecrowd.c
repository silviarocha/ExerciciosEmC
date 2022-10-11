/*Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, 
mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.*/
#include <stdio.h>
#include <math.h>

int main (){
	double a, b, c, r1, r2, delta;
	
	scanf("%lf%lf%lf", &a, &b, &c);
	
	//x = -b +- sqrt(pow(b, 2) - 4 * a * c) / 2 * a
	
	delta = pow(b,2) - 4*a*c;
	
	r1 = b*(-1) + sqrt(delta) / (2*a);
	r2 = b*(-1) - sqrt(delta) / (2*a);
	
	if (delta > 0){
	printf("R1 = %.5lf\n", r1);
	printf("R2 = %.5lf\n", r2);
	} if (delta <= 0){
		printf("Impossivel calcular");
	}
}
