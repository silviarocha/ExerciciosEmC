/* 1- Faca um programa que apresente o menu de opcoes a seguir:
Menu de opcoes:
1. Media aritmetica
2. Media ponderada
3. Sair
Digite a opcao desejada. Na opcao 1: receber duas notas, calcular e mostrar a
media aritmetica. Na opcao 2: receber tres notas e seus respectivos pesos,
calcular e mostrar a media ponderada. Na opcao 3: sair do programa. */

#include <stdio.h>
#include <stdlib.h>

int main ()
{

  //determinacao das variaveis
  float n1_ma, n2_ma, n1_mp, n2_mp, n3_mp, resultado_ma, resultado_mp;
  int continuar=1;
  do {
  //entrada de dados I
  printf ("Menu de Opcoes: \n");
  printf ("1. Media aritmetica (pressione 1)\n");
  printf ("2. Media ponderada (pressione 2)\n");
  printf ("3. Sair (pressione 3)\n");
  scanf("%d", &continuar);
  system("clear");

  //inicializacao das variaveis
  n1_ma=0;
  n2_ma=0;
  n1_mp=0;
  n2_mp=0;
  n3_mp=0;
  
  
  switch(continuar){
    case 1:
    printf("Media aritmetica:\n");
    scanf("%f %f", &n1_ma, &n2_ma);
    resultado_ma = (n1_ma + n2_ma)/2;
    printf("A media aritmetica e: %lf\n", resultado_ma);
    break;

    case 2:
    printf("Media ponderada:\n");
    scanf("%f %f %f", &n1_mp, &n2_mp, &n3_mp);
    resultado_mp = (n1_mp + n2_mp + n3_mp)/n1_mp + n2_mp + n3_mp;
    printf("A media ponderada e: %lf\n", resultado_mp);
    break;
        
    default:
    printf("voce pressionou para sair\n");
    break;
}
  
  //processamento de dados (rascunho)
  /* if(media_aritmetica == 1){
  printf("Media aritmetica\n");
    scanf("%f %f", &n1_ma, &n2_ma);
    resultado_ma = (n1_ma + n2_ma)/2;
  }else if(media_ponderada > 1){
    printf("Media ponderada\n");
        scanf("%f %f %f", &n1_mp, &n2_mp, &n3_mp);
        resultado_mp = ((n1_mp*1) + (n2_mp*2) + (n3_mp*3))/(1+2+3+4);
  } else{
    printf("Pressione 3 para sair\n");
    } */


