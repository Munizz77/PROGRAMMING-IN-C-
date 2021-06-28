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

void imprimirMenorEMaiorValores(int tamanhoMatriz, int matriz[tamanhoMatriz][tamanhoMatriz]){
	int menorValor, segundoMenorValor, maiorValor, segundoMaiorValor;
	int linha, coluna;
	
	menorValor = matriz[0][0], segundoMenorValor = menorValor, 
	maiorValor = matriz[0][0], segundoMaiorValor = maiorValor;
	
	for (linha = 0; linha < tamanhoMatriz; linha++) {
    for (coluna = 0; coluna < tamanhoMatriz; coluna++) {  
			if(menorValor > matriz[linha][coluna]){
				
				segundoMenorValor = menorValor;	
				menorValor = matriz[linha][coluna];

				
			}else if (matriz[linha][coluna] > maiorValor){
				
				segundoMaiorValor = maiorValor;
				maiorValor = matriz[linha][coluna];
			}
    }
  }
    
    printf("O segundo menor valor da matriz é: %d\n", segundoMenorValor);
    printf("O segundo maior valor da matriz é: %d\n", segundoMaiorValor);

}

void imprimirMatriz(int tamanhoMatriz, int matriz[tamanhoMatriz][tamanhoMatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tamanhoMatriz; linha++) {
    for (coluna = 0; coluna < tamanhoMatriz; coluna++) {  
      printf("%4d | ", matriz[linha][coluna]);
    }
    printf("\n");
  }

  printf("\n");
}



int main() {

  int tamanhoMatriz = 5, matriz[tamanhoMatriz][tamanhoMatriz], valorMinimo = 100, valorMaximo = 1000;

  srand(time(NULL));
	gerarMatriz(tamanhoMatriz, matriz, valorMinimo, valorMaximo);
	
	printf("Imprimindo matriz preenchida com valores aleatório %d a %d:\n", valorMinimo, valorMaximo - 1);
	imprimirMatriz(tamanhoMatriz, matriz);
	
	printf("\n\n");
	imprimirMenorEMaiorValores(tamanhoMatriz, matriz);

  return 0;
}