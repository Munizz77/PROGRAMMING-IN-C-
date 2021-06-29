#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  srand( (unsigned)time(NULL) );
  int vetorBin[4], i;

  printf("O valores preenchidos aleatoriamente no vetor são: \n");
	for(i = 0; i < 4; i++){
		
		vetorBin[i] = rand() % 2;
    printf("Posição %d = %d\n", i, vetorBin[i]);
	}
	return 0;
}