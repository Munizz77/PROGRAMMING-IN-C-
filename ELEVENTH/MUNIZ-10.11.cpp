#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

void gerarMatriz(int tmatriz, int matriz[tmatriz][tmatriz], int vmaximo){
	int linha, coluna, valeatorio;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
        
      valeatorio = rand() % vmaximo;
      matriz[linha][coluna] = valeatorio;
    }
  }
}

void checarLinha(int tmatriz, int matriz[tmatriz][tmatriz]){
  int linha, coluna, soma;
 
  for(linha = 0 ; linha < tmatriz ; linha++){
    soma = 0;
 
    for(coluna = 0 ; coluna < tmatriz ; coluna++){
      soma += matriz[linha][coluna];
		}
		if(soma == tmatriz || soma == 0){
      cout << "Linha com valores iguais" << linha + 1 << endl;
		}
  }
}

void checarColuna(int tmatriz, int matriz[tmatriz][tmatriz]){
  int linha, coluna, soma;
 
  for(coluna = 0; coluna < tmatriz ; coluna++){
    soma = 0;
 
    for(linha = 0; linha < tmatriz ; linha++){
      soma += matriz[linha][coluna];

		} 
		if(soma == tmatriz || soma == 0){
      cout << "Coluna com valores iguais" << coluna + 1 << endl;
		}
  }
}

void imprimirMatriz(int tmatriz, int matriz[tmatriz][tmatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tmatriz; linha++) {
    	
    for (coluna = 0; coluna < tmatriz; coluna++) {  
        
      cin >> matriz[linha][coluna]);
    }
  }
}

int main(){
	
  int tmatriz = 3, matriz[tmatriz][tmatriz], vmaximo = 2;
  srand(time(NULL));
  gerarMatriz(tmatriz, matriz, vmaximo);
    
  cout << "Imprimindo matriz original com valores decimais gerados aleatoriamente entre 0 e 1:" << endl;
	imprimirMatriz(tmatriz, matriz);
	printf("\n");
	checarLinha(tmatriz, matriz);
	printf("\n");
	checarColuna(tmatriz, matriz);

  return 0;
}