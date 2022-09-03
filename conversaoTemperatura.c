/*Desenvolva um algoritmo capaz de ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. 
A fórmula de conversão é F ← (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
  
    //def. variaveis
   int temperaturaCelsius, temperaturaFahrenheit;
   
   //ent. de dados
   //entrando c/ a temperatura
   printf("entre com uma temperatura em CELSIUS (000°C):\n");
   scanf("%d", &temperaturaCelsius);
   
   //processamento de dados
   temperaturaFahrenheit = (9 * temperaturaCelsius + 160) / 5;
   
   //saida de dados
   printf("a temperatura em FAHRENHEIT eh: %2.dºF\n", temperaturaFahrenheit);
}
