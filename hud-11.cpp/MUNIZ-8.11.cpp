#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void gerarM(int tamanhoM, int M[tamanhoM][tamanhoM], int minvalor, int maxvalor){
	int linha, coluna, aleavalor;
	
    for (linha = 0; linha < tamanhoM; linha++) {
      for (coluna = 0; coluna < tamanhoM; coluna++) {  
        
        aleavalor = minvalor + (rand() % (maxvalor - minvalor));
        M[linha][coluna] = aleavalor;
        }
    }

}

void substituirValoresPares(int tamanhoM, int M[tamanhoM][tamanhoM]){
	int linha, coluna;
	
	for (linha = 0; linha < tamanhoM; linha++) {
    for (coluna = 0; coluna < tamanhoM; coluna++) {  

			if(M[linha][coluna] % 2 == 0) {
				M[linha][coluna] = 0;
			}
    }
  } 
}

void substituirValoresImpares(int tamanhoM, int M[tamanhoM][tamanhoM]){
	int linha, coluna;
	
	for (linha = 0; linha < tamanhoM; linha++) {
    for (coluna = 0; coluna < tamanhoM; coluna++) {  

			if(M[linha][coluna] % 2 != 0) {
				M[linha][coluna] = 1;
			}
    }
  } 
}

void imprimirM(int tamanhoM, int M[tamanhoM][tamanhoM]){
	int linha, coluna;
	
  for (linha = 0; linha < tamanhoM; linha++) {
    for (coluna = 0; coluna < tamanhoM; coluna++) {  
      printf("%4d | ", M[linha][coluna]);
    }
  }
}

int main() {

  int tamanhoM = 7, M[tamanhoM][tamanhoM], minvalor = 10, maxvalor = 51;

  srand(time(NULL));
	gerarM(tamanhoM, M, minvalor, maxvalor);
	
	printf("Imprimindo M preenchida com valores aleatório %d a %d:\n", minvalor, maxvalor - 1);
	imprimirM(tamanhoM, M);
	
	printf("\n");
	substituirValoresPares(tamanhoM, M);
	
	printf("\n");
	printf("Imprimindo Mes com valores pares substituídos por zero/(0):\n");
	imprimirM(tamanhoM, M);
	
	printf("\n");
	substituirValoresImpares(tamanhoM, M);
	
	printf("\n");
	printf("Imprimindo Mes com valores ímpares substituídos por um/(1):\n");
	imprimirM(tamanhoM, M);

  return 0;
  
}