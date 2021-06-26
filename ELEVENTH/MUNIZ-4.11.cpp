#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;


void gerarMatriz(int tmatriz, int matriz[tmatriz][tmatriz], int VMinimo, int vmaximo){
	int linha, coluna, valeatorio;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
        
      valeatorio = VMinimo + (rand() % (vmaximo - VMinimo));
      matriz[linha][coluna] = valeatorio;
    }
  }

}

void somarValores(int tmatriz, int matriz[tmatriz][tmatriz], int *spositiva, int *snegativa){
	int linha, coluna;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  

      if(matriz[linha][coluna] >= 0){
        *spositiva += matriz[linha][coluna];
			}else{
        *snegativa += matriz[linha][coluna];
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
}
int main() {

  int tmatriz = 5, matriz[tmatriz][tmatriz], VMinimo = -10, vmaximo = 11;
	int spositiva =0, snegativa = 0;
	
  srand(time(NULL));
    
	gerarMatriz(tmatriz, matriz, VMinimo,  vmaximo);
	
	cout << "Matriz original com valores aleatorios"<< VMinimo << "a" << vmaximo - 1 << endl;
	imprimirMatriz(tmatriz, matriz);
	
	somarValores(tmatriz, matriz, &spositiva, &snegativa);
	cout << "A soma dos valores positivos" << spositiva << endl;
	cout << "A soma dos valores negativos" << snegativa << endl;
  
  return 0;
}