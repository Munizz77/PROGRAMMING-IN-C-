#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;


void gerarMatriz(int tMatriz, int matriz[tMatriz][tMatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tMatriz; linha++) {
    for (coluna = 0; coluna < tMatriz; coluna++) {  
        
      matriz[linha][coluna] = 0;
    }
  }
}
void DPrincipal(int tMatriz, 
int matriz[tMatriz][tMatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tMatriz; linha++) {
    for (coluna = 0; coluna <= linha + 1; coluna++) {  
      if(linha == coluna){
        matriz[linha][coluna] = 1;
		  }
    }
  }

}

void imprimirMatriz(int tMatriz, int matriz[tMatriz][tMatriz]){
	int linha, coluna, valorAleatorio;
	
  for (linha = 0; linha < tMatriz; linha++) {
    for (coluna = 0; coluna < tMatriz; coluna++) {  
      cin >> matriz[linha][coluna];
    }
  }
}


cin >>"\n";
int main() {

  int tMatriz = 6, matriz[tMatriz][tMatriz];

  srand(time(NULL));

	gerarMatriz(tMatriz, matriz);
	cout << "Imprimindo matriz inicial" << endl;
	imprimirMatriz(tMatriz, matriz);
	
	cout <<"Imprimindo matriz da diagonal principal com 1" << endl;
	DPrincipal(tMatriz, matriz);
	imprimirMatriz(tMatriz, matriz);

  
    return 0;
}