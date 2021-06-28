#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void gerarMatriz(int tamanhoMatriz, int matriz[tamanhoMatriz][tamanhoMatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tamanhoMatriz; linha++) {
    for (coluna = 0; coluna < tamanhoMatriz; coluna++) {  
        
      matriz[linha][coluna] = 0;
    }
  }

}

void preencherDiagonalPrincipal(int tamanhoMatriz, 
int matriz[tamanhoMatriz][tamanhoMatriz]){

	int linha, coluna;
	
  for (linha = 0; linha < tamanhoMatriz; linha++) {
    for (coluna = 0; coluna <= linha + 1; coluna++) {  
      if(linha == coluna){
        matriz[linha][coluna] = 1;
		  }
    }
  }

}

void imprimirMatriz(int tamanhoMatriz, int matriz[tamanhoMatriz][tamanhoMatriz]){
	int linha, coluna, valorAleatorio;
	
  for (linha = 0; linha < tamanhoMatriz; linha++) {
    for (coluna = 0; coluna < tamanhoMatriz; coluna++) {  
      printf("%d | ", matriz[linha][coluna]);
    }
    printf("\n");
  }

  printf("\n");
}



int main() {

  int tamanhoMatriz = 6, matriz[tamanhoMatriz][tamanhoMatriz];

  srand(time(NULL));

	gerarMatriz(tamanhoMatriz, matriz);
	printf("Imprimindo matriz inicial: \n\n");
	imprimirMatriz(tamanhoMatriz, matriz);
	
	printf("Imprimindo matriz preechida diagonal principal com 1: \n\n");
	preencherDiagonalPrincipal(tamanhoMatriz, matriz);
	imprimirMatriz(tamanhoMatriz, matriz);

  
    return 0;
}