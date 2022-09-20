//determinar os numeros de 1 a 100 e printa-lo por extenso
#include <stdio.h>

int main(){
  int valor;
  int c, d, u;

  printf ("determine um numero e descubra o seu nome por extenso:/> ");
  scanf ("%d", &valor);

  c = valor / 100;
  d = (valor % 100) / 10;
  u = (valor % 100) % 10;

  switch (c){
      if (d == 1 && u == 1){
    case 1:
	  printf ("cem");
	  break;
	}
}
      if (d != 1 && d!= 0){
	    switch(d){	    
	case 2:
	      printf ("vinte");
	      break;
	case 3:
	      printf ("trinta");
	      break;
	case 4:
	      printf ("quarenta");
	      break;
	case 5:
	      printf ("cinquenta");
	      break;
	case 6:
	      printf ("sessenta");
	      break;
	case 7:
	      printf ("setenta");
	      break;
	case 8:
	      printf ("oitenta");
	      break;
	case 9:
	      printf ("noventa");
	      break;}
	      
	      printf (" e ");}
		  
		  
	     if(d == 1){
	  switch (u)
	    {
	    case 0:
	      printf ("dez");
	      break;
	    case 1:
	      printf ("onze");
	      break;
	    case 2:
	      printf ("doze");
	      break;
	    case 3:
	      printf ("treze");
	      break;
	    case 4:
	      printf ("catorze");
	      break;
	    case 5:
	      printf ("quinze");
	      break;
	    case 6:
	      printf ("dezesseis");
	      break;
	    case 7:
	      printf ("dezessete");
	      break;
	    case 8:
	      printf ("dezoito");
	      break;
	    case 9:
	      printf ("dezenove");
	    }
}
     else{
	  switch (u){
	    case 1:
	      printf ("um");
	      break;
	    case 2:
	      printf ("dois");
	      break;
	    case 3:
	      printf ("tres");
	      break;
	    case 4:
	      printf ("quatro");
	      break;
	    case 5:
	      printf ("cinco");
	      break;
	    case 6:
	      printf ("seis");
	      break;
	    case 7:
	      printf ("sete");
	      break;
	    case 8:
	      printf ("oito");
	      break;
	    case 9:
	      printf ("nove");
	      break;
	    }}
	}
