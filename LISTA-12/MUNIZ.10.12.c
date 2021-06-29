#include<stdio.h>

float valor;
int teto(float valor);
int piso(float valor);

int main(){
	
	printf("\nInforme um valor em decimal:");
	scanf("%f", &valor);

  	printf("%d\n",teto(valor));
 	printf("%d\n",piso(valor));
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

