#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  	
  srand( (unsigned)time(NULL) );

	int vetorA[20], i;
	printf("\nValores gerados aleatoriamente com máscara do tipo inteiro: \n");
	for(i = 0; i < 20; i++){
		vetorA[i] =  97 + (rand() % 25);
		printf("\n%d Com máscara de char -> %C\n ", vetorA[i],vetorA[i]);
	}
	return 0;
}