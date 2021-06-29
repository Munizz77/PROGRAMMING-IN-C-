#include <stdio.h>
#include <ctype.h>

char caracter1, catecter2;
int resul;

void checarCaracter(char caracter1, char catecter2);

int main() {
	
    printf("\nInforme o primeiro caracter: ");
    scanf("%c",&caracter1);	
    
    printf("\nInforme o segundo caracter: ");
    scanf(" %c",&catecter2);	
    
	checarCaracter(toupper(caracter1), toupper(catecter2));
    return 0;
}

void checarCaracter(char caracter1, char catecter2){
	int resul;
	if((caracter1 >='A' && caracter1 <='Z') && (catecter2 >='A' && catecter2 <='Z')){
		if(caracter1 > catecter2){
			resul = (caracter1 - catecter2) - 1; 
		}else{
			resul = (catecter2 - caracter1) - 1; 
		}		
		printf("O total de letras entre %c e %c é de: %d\n", caracter1, catecter2, resul);
	}else{
		printf("Os Caracteres informados não são letras do alfabeto\n");
	}
}
