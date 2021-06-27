#include <iostream>
#include<stdio.h>  

using namespace std;

void gerarM(int diasAnos, int meses, int M[diasAnos][meses]);

void datacompleta (int diasAnos, int meses, int M[diasAnos][meses], int infovalor);

int main() {

  int diasAnos = 31, meses = 12, M[diasAnos][meses],
  infovalor;

	gerarM(diasAnos, meses, M);
	
	cout << "Digite um numero entre 1 e 365 para exibir a data" << endl;
  cin >> infovalor;

	datacompleta(diasAnos, meses, M, infovalor);
  return 0;
}

void gerarM(int diasAnos, int meses, int M[diasAnos][meses]){
	int dia, mes, diaDoAno = 0;
	int limiteDiasMes[11] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

	for (mes = 0; mes < meses; mes++) {  
    for (dia = 0; dia < diasAnos; dia++) {
      diaDoAno++;
      if(diaDoAno == limiteDiasMes[mes]){
        M[dia][mes] = diaDoAno;        	
				break;
		  }else{
			  M[dia][mes] = diaDoAno;        		
		  }
    }
  }	
}


void datacompleta (int diasAnos, int meses, int M[diasAnos][meses], int infovalor){
	int dia, mes;
	
  for (dia = 0; dia < diasAnos; dia++) {
    for (mes = 0; mes < meses; mes++) {  
      if(infovalor == M[dia][mes]){
        if( mes < 10 ){
          cout << "O valor" << infovalor << "corresponde a data de" << dia+1 << "/" << mes+1 << "/" << 2021 << endl;
				}else{
					cout << "O valor" << infovalor << "corresponde a data de" << dia+1 << "/" << mes+1 << "/" << 2021 << endl;
				}
			}
    }
  }
}



