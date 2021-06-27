#include <iostream>
#include<stdio.h>  

using namespace std;

float valor;
int teto(float valor);
int piso(float valor);

int main(){
	
	cout << "Digite um valor em decimal" << endl;
	cin >> valor;

  	cin >> teto(valor);
 	cin >> piso(valor);
}


int piso(float valor){
    if(valor -(int)valor == 0){
    	return valor;
	}else{
		return teto(valor)+1;
	}
}
int teto(float valor){
    int valorTeto;
    
    if(valor < 0){
    	
       valorTeto= (int)valor +(-1);
       return valorTeto;
    }else {
    	return valor;	
	}
}

