#include <stdio.h>
#include <ctype.h>
#include <iostream>

using namespace std;

char caracter1, caracter2;
int R;

void CCaracter(char caracter1, char caracter2);

int main() {
	
    cout  << "Digite o primeiro caracter" << endl;
    cin >> caracter1;	
    
    cout  << "Digite o segundo caracter"  << endl;
    cin >> caracter2;	
    
	CCaracter(toupper(caracter1), toupper(caracter2));
	
    return 0;
}

void CCaracter(char caracter1, char caracter2){
	int R;
	if((caracter1 >='A' && caracter1 <='Z') && (caracter2 >='A' && caracter2 <='Z')){
		if(caracter1 > caracter2){
			R = (caracter1 - caracter2) - 1; 
		}else{
			R = (caracter2 - caracter1) - 1; 
		}		
		cout  << "O total de letras entre"<< caracter1 << "e" << caracter2 << "é de" << R << endl;
	}else{
		cout  << "Os caracteres digitados são invalidos. Tente novamente!" << endl;
	}

}



