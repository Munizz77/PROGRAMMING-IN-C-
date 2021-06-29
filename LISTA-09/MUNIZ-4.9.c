#include <stdio.h>

int main(void) {
  int num, unidade,invertido = 0, numPrimario = 0;    
	
	printf("Digite um número para verificar se é um palíndromo: ");    
	scanf("%d",&num);
  numPrimario = num; 

  do {
	unidade = num % 10;    
	invertido = (invertido * 10) + (unidade);    
	num = (num/10);   
  }while(num > 0);

	if(numPrimario == invertido) {  
		printf("O número %d é um palíndromo", numPrimario);    
	}else{    
		printf("O número %d não é um palíndromo",numPrimario );
  } 
	return 0;  
}