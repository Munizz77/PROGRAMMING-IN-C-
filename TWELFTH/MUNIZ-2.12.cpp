#include <iostream>
#include<stdio.h>  

using namespace std;

void valor(int infovalor);

int infovalor;
char valoresPorExtenso[11] = {"zero", "um", "dois", "três", "quatro","cinco", 
"seis", "sete", "oito", "nove", "dez"};

int main(){
	  
    printf("Digite um número entre 0 e 10 ");
    cin >> infovalor;  
    valor(infovalor);	
    return 0;
}

void valor(int infovalor){
	
	if(infovalor < 0 || infovalor > 10){
		cout << "O numero informado está errado. Informe um valor entre 0 e 10" << endl;		
	}else {
		cout << "O valor", infovalor << "por escrito é "<< valoresPorExtenso[infovalor] << endl;
	}
}