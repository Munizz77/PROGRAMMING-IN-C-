#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarM(int tamnhanhoMz, int M[tamnhanhoMz][tamnhanhoMz]){
	int linha, coluna;
	
  for (linha = 0; linha < tamnhanhoMz; linha++) {
    for (coluna = 0; coluna < tamnhanhoMz; coluna++) {          
      M[linha][coluna] = 0;
    }
  }
}

void diagonalcompleta(int tamnhanhoMz, 
int M[tamnhanhoMz][tamnhanhoMz]){

	int linha, coluna;
	
  for (linha = 0; linha < tamnhanhoMz; linha++) {
    for (coluna = 0; coluna <= linha + 1; coluna++) {  
      if(linha == coluna){
        M[linha][coluna] = 1;
		  }
    }
  }
}

void mostrandoM(int tamnhanhoMz, int M[tamnhanhoMz][tamnhanhoMz]){
	int linha, coluna, alevalor;
	
  for (linha = 0; linha < tamnhanhoMz; linha++) {
    for (coluna = 0; coluna < tamnhanhoMz; coluna++) {  
      printf("%d | ", M[linha][coluna]);
    }
  }
}

int main() {

  int tamnhanhoMz = 6, M[tamnhanhoMz][tamnhanhoMz];

  srand(time(NULL));

	gerarM(tamnhanhoMz, M);
	printf("M inicial: \n\n");
	mostrandoM(tamnhanhoMz, M);
	
	printf("Mostrando M completa na diagonal principal com 1.\n");
	diagonalcompleta(tamnhanhoMz, M);
	mostrandoM(tamnhanhoMz, M);

  
    return 0;
}