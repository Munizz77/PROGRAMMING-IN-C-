#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

void gerarMatriz(int tmatriz, int matriz[tmatriz][tmatriz], int vminimo, int vmaximo){
	int linha, coluna, valeatorio;
	
    for (linha = 0; linha < tmatriz; linha++) {
      for (coluna = 0; coluna < tmatriz; coluna++) {  
        
        valeatorio = vminimo + (rand() % (vmaximo - vminimo));
        matriz[linha][coluna] = valeatorio;
        }
    }

}

void substituirValoresPares(int tmatriz, int matriz[tmatriz][tmatriz]){
	int linha, coluna;
	
	for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  

			if(matriz[linha][coluna] % 2 == 0) {
				matriz[linha][coluna] = 0;
			}
    }
  } 
}

void substituirValoresImpares(int tmatriz, int matriz[tmatriz][tmatriz]){
	int linha, coluna;
	
	for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  

			if(matriz[linha][coluna] % 2 != 0) {
				matriz[linha][coluna] = 1;
			}
    }
  } 
}

void imprimirMatriz(int tmatriz, int matriz[tmatriz][tmatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
      cin >> matriz[linha][coluna];
    }
  }
  cin >>"\n";
}
int main() {

  int tmatriz = 7, matriz[tmatriz][tmatriz], vminimo = 10, vmaximo = 51;

  srand(time(NULL));
	gerarMatriz(tmatriz, matriz, vminimo, vmaximo);
	
	cout << "Matriz preenchida com valores aleatório" << vminimo << "a" << vmaximo - 1 << end;
	imprimirMatriz(tmatriz, matriz);
	
	cout << "\n"); 
	substituirValoresPares(tmatriz, matriz);
	
	cout << "\n");
	cout << "Mtrizes com valores pares substituídos por zero" << endl;
	imprimirMatriz(tmatriz, matriz);
	
	cout << "\n");
	substituirValoresImpares(tmatriz, matriz);
	
	cout << "\n");
	cout << "Matrizes com valores ímpares substituídos por um/(1)" << endl;
	imprimirMatriz(tmatriz, matriz);

  return 0;
  
}