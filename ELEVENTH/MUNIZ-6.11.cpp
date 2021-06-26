#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

void gerarMatriz(int tmatriz, int matriz[tmatriz][tmatriz], int vminino, int vmaximo){
	int linha, coluna, valeatorio;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
        
      valeatorio = vminino + (rand() % (vmaximo - vminino));
      matriz[linha][coluna] = valeatorio;
    }
  }

}

void menoremaiorvalor(int tmatriz, int matriz[tmatriz][tmatriz]){
	int menorValor, segundoMenorValor, maiorValor, segundoMaiorValor;
	int linha, coluna;
	
	menorValor = matriz[0][0], segundoMenorValor = menorValor, 
	maiorValor = matriz[0][0], segundoMaiorValor = maiorValor;
	
	for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
			if(menorValor > matriz[linha][coluna]){
				
				segundoMenorValor = menorValor;	
				menorValor = matriz[linha][coluna];

				
			}else if (matriz[linha][coluna] > maiorValor){
				
				segundoMaiorValor = maiorValor;
				maiorValor = matriz[linha][coluna];
			}
    }
  }
    
    cout << "O segundo menor valor da matriz é" << segundoMenorValor << endl;
    cout << "O segundo maior valor da matriz é" << segundoMaiorValor << endl;

}

void matrizz(int tmatriz, int matriz[tmatriz][tmatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
      cin >> matriz[linha][coluna];
    }
  }
 cin >>"\n";
}

int main() {

  int tmatriz = 5, matriz[tmatriz][tmatriz], vminino = 100, vmaximo = 1000;

  srand(time(NULL));
	gerarMatriz(tmatriz, matriz, vminino, vmaximo);	
	cout << "Matriz preenchida com valores aleatório" << vminino << "a" <<  vmaximo - 1);
	matrizz(tmatriz, matriz);
	cin >>"n";
	menoremaiorvalor(tmatriz, matriz);

  return 0;
}