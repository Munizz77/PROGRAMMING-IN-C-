#include <iostream>
#include<stdio.h>  
using namespace std;

int main()    
{    
	int nInvertido = 0, vUnidade, numero,  nOriginal;    
	
	cout << "Digite um numero qualquer para ser é um palíndromo" << endl;   
	cin >> numero;  
	getchar();
	nOriginal = numero;    
	
	while(numero > 0)    
	{    
		vUnidade = numero % 10;    
		nInvertido = (nInvertido *10) + vUnidade;    
		numero = numero/10;   
	}    
	if(nOriginal == nInvertido)    
		cout << "O número" << nOriginal << "é um palíndromo" << endl;    
	else    
		cout << "O número" << nOriginal << "não é um palíndromo " <<endl;
		
		  
	return 0;  
}