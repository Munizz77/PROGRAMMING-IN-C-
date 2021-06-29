#include <stdio.h>

void Valorextenso(int valor);

int valor;
char *extenso[11] = {"zero", "um", "dois", "três", "quatro","cinco", 
"seis", "sete", "oito", "nove", "dez"};

int main(){
	  
    printf("Digite um número inteiro entre 0 e 10: ");
    scanf("%d", &valor); 
    Valorextenso(valor);	
    return 0;
}

void Valorextenso(int valor){
	
	if(valor < 0 || valor > 10){
		printf("Valor inválido! Informe um valor entre 0 e 10\n");
		
	}else {
		printf("O valor %d por extenso é: %s\n", valor, extenso[valor]);
	}
}