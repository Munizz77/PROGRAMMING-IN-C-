#include <iostream>
#include<stdio.h>  

using namespace std;

void meses(int infovalor);

int infovalor;
char *meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio",
"Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

int main(){
  
    printf("Digite um número inteiro entre 1 e 12: ");
    cin >> infovalor;  
    meses(infovalor);	
    return 0;
}

void meses(int infovalor){
	
	if(infovalor < 1 || infovalor > 12){	
		cout << "O numero informado está errado. Informe um valor entre 1 e 12" << endl;
		
	}else {		
		cout << "Mês" << infovalor << meses[infovalor - 1] << endl;
	}
}
 

