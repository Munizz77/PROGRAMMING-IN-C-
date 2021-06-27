#include <iostream>
#include<stdio.h>  

using namespace std;
 
void predigito(char digito1, char proximoDigito);
void posdigito(char digitoR, int digitoA);
void Rconvertido(int digitoA);
 
char digitoR[50];
int indice = 0;
int digitoA;

int main(){
 
  cout << "Informe um valor entre 1 e 50 " << endl;
  cin >> digitoA;
  Rconvertido(digitoA);

  return 0;
}

void predigito(char digito1, char proximoDigito){
    digitoR[indice++] = digito1;
    digitoR[indice++] = proximoDigito;
}
 
void posdigito(char posDigito, int digitoA){
    int contador;
    for (contador = 0; contador < digitoA; contador++)
        digitoR[indice++] = posDigito;
}

void Rconvertido(int digitoA){
	int digito;
  
	if (digitoA <= 0){
  	
  	cout << "Valor Incorreto" << endl;
  
  }else{
	  while (digitoA != 0){
			if (digitoA == 50 ){
			  if (digitoA < (50 + 4 * 10)){
			    posdigito('L', digitoA / 50);
			    digitoA = digitoA - (digitoA / 50) * 50;
			  }
			        
			}else if (digitoA >= 10){
				if (digitoA < (10 + 3 * 10)){
			    posdigito('X', digitoA / 10);
			    digitoA = digitoA - (digitoA / 10) * 10;
			  }else{
			    predigito('X','L');
			    digitoA = digitoA - (50 - 10);
			  }
			    	
			}else if (digitoA >= 5){
				if (digitoA < (5 + 4 * 1)){
			    posdigito('V', digitoA / 5);
			    digitoA = digitoA - (digitoA / 5) * 5;
			  }else{
			    predigito('I', 'X');
			    digitoA = digitoA - (10 - 1);
			  }
			     
			  }else if (digitoA >= 1){
			    if (digitoA < 4){
			    	posdigito('I', digitoA / 1);
			    	digitoA = digitoA - (digitoA / 1) * 1;
			    }else{
			    	predigito('I', 'V');
			    	digitoA = digitoA - (5 - 1);
			    }
			  }
		}