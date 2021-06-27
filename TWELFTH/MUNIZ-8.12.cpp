#include <iostream>
#include<stdio.h>  

using namespace std;

int valor1, valor2, valor3, media;

int cmedia(int valor1, int valor2, int valor3);

int main() {
	
    cout << "Digite o primeiro valor" << endl;
    cin >> valor1;	
    
    cout << "Digite o segundo valor" << endl;
    cin >> valor2;	
    
    cout << "Digite o terceiro valor" << endl;
    cin >> valor3;	
    
	media = cmedia (valor1, valor2, valor3);
	cout << "A média dos valores" << valor1  << valor2 << valor3 << "é:" << media << endl;
    return 0;
}

int cmedia(int valor1, int valor2, int valor3){
	return (valor1 + valor2 + valor3) / 3;

}