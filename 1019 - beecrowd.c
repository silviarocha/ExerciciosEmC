#include <stdio.h>

int main() {
  int n, horas, minutos, segundos;
  
  scanf("%d", &n);
  
  horas = (n/3600)/60;
  minutos = (n*60)/60;
  segundos = n/60;
  
  printf("%d:%d:%d\n", horas, minutos, segundos);
  return 0;
}
