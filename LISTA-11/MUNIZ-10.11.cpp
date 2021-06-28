#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarM(int tamanhoM, int M[tamanhoM][tamanhoM], int Maxvalor){
	int linha, coluna, alevalor;
	
  for (linha = 0; linha < tamanhoM; linha++) {
    for (coluna = 0; coluna < tamanhoM; coluna++) {  
        
      alevalor = rand() % Maxvalor;
      M[linha][coluna] = alevalor;
    }
  }
}

void checarLinha(int tamanhoM, int M[tamanhoM][tamanhoM]){
  int linha, coluna, soma;
 
  for(linha = 0 ; linha < tamanhoM ; linha++){
    soma = 0;
 
    for(coluna = 0 ; coluna < tamanhoM ; coluna++){
      soma += M[linha][coluna];

		}
		if(soma == tamanhoM || soma == 0){
      printf("\nLinha com valores iguais: %d\n", linha + 1);
		}
  }
}

void checarColuna(int tamanhoM, int M[tamanhoM][tamanhoM]){
  int linha, coluna, soma;
 
  for(coluna = 0; coluna < tamanhoM ; coluna++){
    soma = 0;
 
    for(linha = 0; linha < tamanhoM ; linha++){
      soma += M[linha][coluna];

		} 
		if(soma == tamanhoM || soma == 0){
      printf("Coluna com valores iguais: %d\n", coluna + 1);
		}
  }
}


void imprimirM(int tamanhoM, int M[tamanhoM][tamanhoM]){
	int linha, coluna;
	
  for (linha = 0; linha < tamanhoM; linha++) {
    	
    for (coluna = 0; coluna < tamanhoM; coluna++) {  
        
      printf("%d | ", M[linha][coluna]);
    }
  }
}

int main(){
	
  int tamanhoM = 3, M[tamanhoM][tamanhoM], Maxvalor = 2;

  srand(time(NULL));
  gerarM(tamanhoM, M, Maxvalor);
    
  printf("\nMostrando a M com valores decimais gerados aleatoriamente entre 0 e 1: \n");
	imprimirM(tamanhoM, M);
	
	printf("\n");
	checarLinha(tamanhoM, M);
	
	printf("\n");
	checarColuna(tamanhoM, M);
	
  return 0;
}
