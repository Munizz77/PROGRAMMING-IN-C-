#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void gerarMatriz(int tamnhanhoMz, int matriz[tamnhanhoMz][tamnhanhoMz], int minimoV, int MaximoV){
	int linha, coluna, AleValor;
  for (linha = 0; linha < tamnhanhoMz; linha++) {
    for (coluna = 0; coluna < tamnhanhoMz; coluna++) {  
        
      AleValor = minimoV + (rand() % (MaximoV - minimoV));
      matriz[linha][coluna] = AleValor;
    }
  }
}

void imprimirMatriz(int tamnhanhoMz, int matriz[tamnhanhoMz][tamnhanhoMz]){
	int linha, coluna;
	
  for (linha = 0; linha < tamnhanhoMz; linha++) {
    for (coluna = 0; coluna < tamnhanhoMz; coluna++) {  
      printf("%d | ", matriz[linha][coluna]);
    }
  }
}

int main() {

  int tamnhanhoMz = 10, matriz[tamnhanhoMz][tamnhanhoMz], minimoV = 10, MaximoV = 100;

  srand(time(NULL));

	gerarMatriz(tamnhanhoMz, matriz, minimoV,  MaximoV);
	printf("Mostrando matriz completa com valores aleatório entre 10 e 99:\n");
	imprimirMatriz(tamnhanhoMz, matriz);

    return 0;
}