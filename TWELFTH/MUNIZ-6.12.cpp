#include <stdio.h>
#include <iostream>

using namespace std;

char caracter;
int R;

int checarCaracter(char caracter);

int main() {
	
    cout << "Digite um caracter" << endl;
    cin >> caracter
    ;	
	R = checarCaracter(caracter);
	
	if (R == 1){
		cout << "O caracter" << caracter <<  "é uma letra do alfabeto" << endl;
	}else {
		cout << "O caracter" << caracter << "não é uma letra do alfabeto"  << endl;
	}
    return 0;
}

int checarCaracter(char caracter){

    if((caracter >='a' && caracter <='z') || (caracter >='A' && caracter <='Z')){
    	return 1;
	}else{
    	return 0;
	}

}



