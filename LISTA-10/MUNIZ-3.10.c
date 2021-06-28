#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a,b;

void testarDivisao();
int checarDivisao(int a, intb);
void imprimirTesteDivisao();

int main() {

	srand(time(NULL));
	imprimirTesteDivisao();
 
  return 0;
}

void imprimirTesteDivisao(){
  int contador, resuldiv;

  for (contador = 0; contador < 10; contador++) {

    a = rand() % 20;
   b =  1 + (rand() % (10 - 1));
    
    resuldiv = checarDivisao(a,b);
    	
    printf("\nTestando o número %d", contador+1);

	  printf("\na: %d", a);
	  printf("\ny: %d",b);
    
	  printf("\nO valor [%d] é divísivel por [%d]|| Digite (1) para Sim e (2) para Não: %d \n", a,b,resuldiv);   
    }
}

int checarDivisao(int a, intb){
	if( a %b == 0){
		return 1;
	}else {
		return 0;
	}
	
}

