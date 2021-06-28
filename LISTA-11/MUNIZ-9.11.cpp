#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarMatriz(int tamanhoMatriz, float matriz[tamanhoMatriz][tamanhoMatriz], int valorMinimo, int valorMaximo){
	int linha, coluna;
	float valorAleatorio;
	
  for (linha = 0; linha < tamanhoMatriz; linha++) {
    for (coluna = 0; coluna < tamanhoMatriz; coluna++) {  
        
      valorAleatorio = ((float)rand() / RAND_MAX) * (valorMaximo - valorMinimo) + valorMinimo;
      matriz[linha][coluna] = valorAleatorio;
    }
  }

}

void dobrarValoresMatriz(int tamanhoMatriz, float matriz[tamanhoMatriz][tamanhoMatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tamanhoMatriz; linha++) {
    for (coluna = 0; coluna < tamanhoMatriz; coluna++) { 
			matriz[linha][coluna] = matriz[linha][coluna] * 2;
    }
  }

}

void substrairPorUm(int tamanhoMatriz, float matriz[tamanhoMatriz][tamanhoMatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tamanhoMatriz; linha++) {
    for (coluna = 0; coluna < tamanhoMatriz; coluna++) { 
      if(matriz[linha][coluna] < 0){
        matriz[linha][coluna] = matriz[linha][coluna] + 1;
			}else{
				matriz[linha][coluna] = matriz[linha][coluna] - 1;
			}

    }
  }

}



void imprimirMatriz(int tamanhoMatriz, float matriz[tamanhoMatriz][tamanhoMatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tamanhoMatriz; linha++) {
    for (coluna = 0; coluna < tamanhoMatriz; coluna++) {  
      printf("%9f| ", matriz[linha][coluna]);
    }
    printf("\n");
  }

  printf("\n");
}


 
int main(){
	
  int tamanhoMatriz = 2, valorMinimo = -1, valorMaximo = 1;
  float matriz[tamanhoMatriz][tamanhoMatriz], media;

  srand(time(NULL));
  gerarMatriz(tamanhoMatriz, matriz, valorMinimo, valorMaximo);
    
  printf("Imprimindo matriz original com valores decimais gerados aleatoriamente entre %d e %d: \n", valorMinimo, valorMaximo);
	imprimirMatriz(tamanhoMatriz, matriz);
	
	printf("\n");
	
	dobrarValoresMatriz(tamanhoMatriz, matriz);
	printf("Imprimindo o dobro dos valores da matriz original: \n");
	imprimirMatriz(tamanhoMatriz, matriz);
	
	printf("\n");
	
	substrairPorUm(tamanhoMatriz, matriz);
	printf("Imprimindo os valores dobrados substraído por 1: \n");
	imprimirMatriz(tamanhoMatriz, matriz);
	
		
  return 0;
}
