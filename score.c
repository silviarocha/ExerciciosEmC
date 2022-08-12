// score
#include <stdio.h>

int main() {
  int pontuacao;
  
  printf("Entre com uma pontuaçao (0 - 100):\n");
  scanf("%d", &pontuacao);
  
  switch(pontuacao / 10){
      case 10:
      case 9:
        printf("categoria: A");
        break;
      case 8:
        printf("categoria: B");
        break;
      case 7:
        printf("categoria: C");
        break;
      case 6:
        printf("categoria: D");
        break;
      case 5:
        printf("categoria: E");
        break;
      default:
        printf("categoria: F");
        break;
  }
  return 0;
}
