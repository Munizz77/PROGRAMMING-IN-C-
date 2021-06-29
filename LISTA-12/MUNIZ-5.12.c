#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int x, y;

void testediv();
int checarDivisao(int x, int y);

int main() {
	
	srand(time(NULL));
	testediv();
 
    return 0;
}
void testediv(){
    int contador;
    int resuldiv;
    for (contador = 0; contador < 10; contador++) {
    	x = rand() % 10;
    	y =  1 + (rand() % (10 - 1));
    	resuldiv = checarDivisao(x, y);
    	
    	printf("Teste nº %d\n", contador+1);
	    printf("x: %d\n", x);
	    printf("y: %d\n", y);
	    printf("\nO valor [%d] é divísivel por [%d] (1) para Sim e 2 para Não): %d \n", x, y, resuldiv); 
    }
}

int checarDivisao(int x, int y){
	if( x % y == 0){
		return 1;
	}else {
		return 0;
	}
}



