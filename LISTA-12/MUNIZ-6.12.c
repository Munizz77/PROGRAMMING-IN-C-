#include <stdio.h>

char caracter;
int resul;

int checarCaracter(char caracter);
int main() {
	
    printf("\nInnforme um caracter:");
    scanf("%c",&caracter);	
	resul = checarCaracter(caracter);
	
	if (resul == 1){
		printf("\nO caracter [%c] é uma letra do alfabeto", caracter);
	}else {
		printf("\nO caracter [%c] não é uma letra do alfabeto", caracter);	
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
