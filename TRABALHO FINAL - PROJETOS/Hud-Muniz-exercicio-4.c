#include<stdio.h>

int resulmenor(int valor1, int valor2, int valor3);
int resulmaior(int valor1, int valor2, int valor3);

int main(){

	int valor1, valor2, valor3r, maior, menor;

  printf("\nVamos encontrar o menor e maior valor entre 3 números informados");
  
	printf("\nInforme na sequência o primeiro, segundo e terceiro valor:");
	scanf("%d %d %d", &valor1, &valor2, &valor3r);

	menor = resulmenor(valor1, valor2, valor3r);
	maior = resulmaior(valor1, valor2, valor3r);
  
	printf("\nEntre %d, %d e %d o maior e menor valores são:", valor1, valor2, valor3r);
	printf("\nMenor: %d", menor);
	printf("\nMaior: %d", maior);
	
   	return 0;
}
int resulmenor(int valor1, int valor2, int valor3r){

	if (valor2 < valor1 && valor2 < valor3r){
		return valor2;
	}
	if (valor3r < valor1&& valor3r < valor2){
		return valor3r;
	}
	return valor1;
}


