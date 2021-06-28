#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void gerarMatriz(int tamanhoMatriz, int matriz[tamanhoMatriz][tamanhoMatriz], int valorMinimo, int valorMaximo){
	int linha, coluna, valorAleatorio;
	
  for (linha = 0; linha < tamanhoMatriz; linha++) {
    for (coluna = 0; coluna < tamanhoMatriz; coluna++) {  
        
      valorAleatorio = valorMinimo + (rand() % (valorMaximo - valorMinimo));
      matriz[linha][coluna] = valorAleatorio;
    }
  }

}

void imprimirMatriz(int tamanhoMatriz, int matriz[tamanhoMatriz][tamanhoMatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tamanhoMatriz; linha++) {
    for (coluna = 0; coluna < tamanhoMatriz; coluna++) {
      printf("%3d|", matriz[linha][coluna]);
    }
    printf("\n");
  }

  printf("\n");
}



int main() {

  int tamanhoMatriz = 5, matriz[tamanhoMatriz][tamanhoMatriz], valorMinimo = -10, valorMaximo = 11;

  srand(time(NULL));

	gerarMatriz(tamanhoMatriz, matriz, valorMinimo,  valorMaximo);
  
	printf("Imprimindo matriz preenchida com valores aleatório %d a %d: \n \n", valorMinimo, valorMaximo - 1);

	imprimirMatriz(tamanhoMatriz, matriz);

  
    return 0;
}