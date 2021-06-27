#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void mostrarMz(int tamnhanhoMz, int M[tamnhanhoMz][tamnhanhoMz], int minimoV, int maximoV){
	int linha, coluna, alevalor;
	
  for (linha = 0; linha < tamnhanhoMz; linha++) {
    for (coluna = 0; coluna < tamnhanhoMz; coluna++) {  
        
      alevalor = minimoV + (rand() % (maximoV - minimoV));
      M[linha][coluna] = alevalor;
    }
  }
}

void imprimirM(int tamnhanhoMz, int M[tamnhanhoMz][tamnhanhoMz]){
	int linha, coluna;
	
  for (linha = 0; linha < tamnhanhoMz; linha++) {
    for (coluna = 0; coluna < tamnhanhoMz; coluna++) {
      printf("%3d|", M[linha][coluna]);
    }
  }
}

int main() {

  int tamnhanhoMz = 5, M[tamnhanhoMz][tamnhanhoMz], minimoV = -10, maximoV = 11;

  srand(time(NULL));
	mostrarMz(tamnhanhoMz, M, minimoV,  maximoV);
	printf("Mostrando matriz completo com valores sem ordem entre %d e %d: \n \n", minimoV, maximoV - 1);
	imprimirM(tamnhanhoMz, M);
  
    return 0;
}