#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void gerarM(int tamanhoM, int M[tamanhoM][tamanhoM], int minimoV, int maximoV){
	int linha, coluna, alevalor;
	
  for (linha = 0; linha < tamanhoM; linha++) {
    for (coluna = 0; coluna < tamanhoM; coluna++) {  
        
      alevalor = minimoV + (rand() % (maximoV - minimoV));
      M[linha][coluna] = alevalor;
    }
  }
}

void somarValores(int tamanhoM, int M[tamanhoM][tamanhoM], int *somaP, int *somaN){
	int linha, coluna;
	
  for (linha = 0; linha < tamanhoM; linha++) {
    for (coluna = 0; coluna < tamanhoM; coluna++) {  

      if(M[linha][coluna] >= 0){
        *somaP += M[linha][coluna];
			}else{
        *somaN += M[linha][coluna];
			}
    }
  }
}

void imprimirM(int tamanhoM, int M[tamanhoM][tamanhoM]){
	int linha, coluna;
	
  for (linha = 0; linha < tamanhoM; linha++) {
    for (coluna = 0; coluna < tamanhoM; coluna++) {
      printf("%3d|", M[linha][coluna]);
    }
  }
}

int main() {

  int tamanhoM = 5, M[tamanhoM][tamanhoM], minimoV = -10, maximoV = 11;
	int somaP =0, somaN = 0;
	
  srand(time(NULL));
	gerarM(tamanhoM, M, minimoV,  maximoV);
	
	printf("Mostrando matriz completa com valores sem ordem entre %d e %d: \n \n", minimoV, maximoV - 1);
	imprimirM(tamanhoM, M);
	
	somarValores(tamanhoM, M, &somaP, &somaN);
	printf("Soma dos valores positivos: %d \n", somaP);
	printf("Soma dos valores negativos: %d \n", somaN);
  
  return 0;
}