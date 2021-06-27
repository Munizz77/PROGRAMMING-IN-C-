#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void gerarM(int tamanhoM, int M[tamanhoM][tamanhoM]){
	int linha, coluna, alevalor;
	
  for (linha = 0; linha < tamanhoM; linha++) {
    for (coluna = 0; coluna < tamanhoM; coluna++) {  
        
      alevalor = rand() % 101;
      M[linha][coluna] = alevalor;
    }
  }
}

void mostrandomenoremaior(int tamanhoM, int M[tamanhoM][tamanhoM]){

  int linha, coluna, menorv, maiorv;
	
	menorv = M[0][0], maiorv = M[0][0];
	
	for (linha = 0; linha < tamanhoM; linha++) {
    for (coluna = 0; coluna < tamanhoM; coluna++) {  

			if(menorv > M[linha][coluna]){				
				menorv = M[linha][coluna];
				
			}else if (M[linha][coluna] > maiorv){
				
				maiorv = M[linha][coluna];
			}
        }
    }
    
    printf("O menor valor da Matriz é: %d\n", menorv);
    printf("O maior valor da Matriz é: %d\n", maiorv);

}

void imprimirM(int tamanhoM, int M[tamanhoM][tamanhoM]){
	int linha, coluna;
	
  for (linha = 0; linha < tamanhoM; linha++) {
    for (coluna = 0; coluna < tamanhoM; coluna++) {  
      printf("%3d | ", M[linha][coluna]);
    }
    }
}

int main() {

  int tamanhoM = 10, M[tamanhoM][tamanhoM];

  srand(time(NULL));
	gerarM(tamanhoM, M);
	
	printf("Imprimindo M preenchida com valores sem ordem entre 0 e 100:\n");
	imprimirM(tamanhoM, M);
	
	printf("\n\n");
	mostrandomenoremaior(tamanhoM, M);

  
  return 0;
}