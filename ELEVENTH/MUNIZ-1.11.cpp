#include <iostream>
#include<stdio.h>  
#include <time.h>

using namespace std;


void gerarMatriz(int tMatriz, int matriz[tMatriz][tMatriz], int vMinimo, int vMaximo){
	int coluna,linha,  vAleatorio;
	
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
          cin >> matriz[linha][coluna];
       }
      cin >> "\n";
  }
}
      int main() {
     int tMatriz = 10, matriz[tMatriz][tMatriz], vMinimo = 10, vMaximo = 100;

    srand(time(NULL));

	    gerarMatriz(tMatriz, matriz, vMinimo,  vMaximo);
	    cout << " Matrizes preenchidas com valores aleatório entre 10 e 99" << endl;
	    imprimirMatriz(tMatriz, matriz);

  
    return 0;
}