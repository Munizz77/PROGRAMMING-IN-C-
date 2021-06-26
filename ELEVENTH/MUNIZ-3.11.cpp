#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;


void gerarMatriz(int tMatriz, int matriz[tMatriz][tMatriz], int vMinimo, int vMaximo){
	int linha, coluna, vAleatorio;
	
for (linha = 0; linha < tMatriz; linha++) {
    for (coluna = 0; coluna < tMatriz; coluna++) {  
        
      vAleatorio = vMinimo + (rand() % (vMaximo - vMinimo));
      matriz[linha][coluna] = vAleatorio;
    }
  }
}

void imprimirMatriz(int tMatriz, int matriz[tMatriz][tMatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tMatriz; linha++) {
    for (coluna = 0; coluna < tMatriz; coluna++) {
      cinn >> matriz[linha][coluna];
    }
  }
}
cin >>"\n";
int main() {

  int tMatriz = 5, matriz[tMatriz][tMatriz], vMinimo = -10, vMaximo = 11;

    srand(time(NULL));
	gerarMatriz(tMatriz, matriz, vMinimo,  vMaximo);

	cout << "Matriz com valores aleatório" << vMinimo << "a" << vMaximo - 1 << endl;

	imprimirMatriz(tMatriz, matriz);
    return 0;
}