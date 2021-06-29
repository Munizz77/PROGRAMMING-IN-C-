#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
  srand( (unsigned)time(NULL) );
	int vetorInteiros[8], i, 
	valoresMaiores = 0, somaValores = 0, somaTudo = 0; 
  printf("\nOs 8 valores gerando aleatoriamente entre 0 e 50 são:\n");
	for(i = 0; i < 8; i++){
		vetorInteiros[i] = rand() % 51;
    printf("Posição: %d = %d\n", i, vetorInteiros[i]);
		if(vetorInteiros[i] > 30){
			valoresMaiores++;
			somaValores += vetorInteiros[i];
		}somaTudo += vetorInteiros[i];
	}
	printf("\nA quantidade de valores maiores que 30 é: %d\n", valoresMaiores);
	printf("A soma de todos valores maiores que 30 é: %d\n", somaValores);
	printf("A soma de todos os valores do vetor é: %d\n", somaTudo);

	return 0;
}