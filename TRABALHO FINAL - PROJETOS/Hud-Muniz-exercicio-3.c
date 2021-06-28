#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int h, p;

void testarDivisao();
int div(int h, int p);
void testdiv();

int main() {

	srand(time(NULL));
	testdiv();
 
  return 0;
}

void testdiv(){

  int contador;
  int resuldatadodadiv;
  for (contador = 0; contador < 10; contador++) {
    h = rand() % 20;
    p =  1 + (rand() % (10 - 1));
    resuldatadodadiv = div(h, p);
    	
    printf("\nTeste número %d", contador+1);
	  printf("\nh: %d", h);
	  printf("\np: %d", p);
	  printf("\nO valor [%d] é divísivel por [%d] (1-Sim/2-Não): %d \n\n", h, p, resuldatadodadiv);
    }
}

int div(int h, int p){
	if( h % p == 0){
		return 1;
	}else {
		return 0;
	}
	
}


