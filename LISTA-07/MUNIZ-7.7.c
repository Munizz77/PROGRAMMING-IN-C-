#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
  int ndigitado, numero = 0, volta, linha, coluna;

  cout << "Digite um numero inteiro positivo "<< endl;
  cin >> ndigitado;

  if(ndigitado > 0){
    for(linha = 0 ; linha < ndigitado; linha++){
			++numero;
		for(coluna = 0; coluna <= linha; coluna++){
			cin >> numero;
		}printf("\n");volta++;
    if(volta == ndigitado){
      for(linha = 0 ; linha < ndigitado; linha++){
        ++numero;
      for(coluna = 0; coluna <= linha; coluna++){
        cin >> numero;
		}
    }
  }else{
    cout << "Este numero não é positivo.Tente novamente :)"<< endl;
  }
  return 0;
}
}