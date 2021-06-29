#include <stdio.h>

int valor1, valor2, valor3, resulmedia;

int calcularMedia(int valor1, int valor2, int valor3);

int main() {
	
    printf("\nDigite o primeiro valor: ");
    scanf("%d",&valor1);	
    
    printf("\nDigite o segundo caracter: ");
    scanf("%d",&valor2);	
    
    printf("\nDigite o segundo caracter: ");
    scanf("%d",&valor3);	
    
	resulmedia = calcularMedia (valor1, valor2, valor3);
	printf("\nA média dos valores %d, %d, %d é: %d\n", valor1, valor2, valor3, resulmedia);
	
    return 0;
}

int calcularMedia(int valor1, int valor2, int valor3){
	return (valor1 + valor2 + valor3) / 3;
}



