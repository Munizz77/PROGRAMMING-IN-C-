#include <stdio.h>

int main(){
	
	int valorInicial = 10, valorFinal = 20, posicaoVetor, numero = 0;
	int tamanhoVetor = 11, vetorNumeros[tamanhoVetor];
	
	numero = valorInicial;
	for(posicaoVetor = 0 ; posicaoVetor < tamanhoVetor; posicaoVetor++){
		vetorNumeros[posicaoVetor] = numero;
		numero++;
	}
	
	printf("Os valores pares que vão do número 20 ao 10 são: \n");
	for(posicaoVetor = tamanhoVetor - 1 ; posicaoVetor >= 0; posicaoVetor--){
		if(vetorNumeros[posicaoVetor] % 2 == 0){
			printf("%d\n", vetorNumeros[posicaoVetor]);
		}
	}
	
	printf("\n\n");
	printf("Elementos ímpares: \n");
	for(posicaoVetor = tamanhoVetor - 1 ; posicaoVetor >= 0; posicaoVetor--){
		if(vetorNumeros[posicaoVetor] % 2 != 0){
			printf("%d\n", vetorNumeros[posicaoVetor]);
		}
	}
		
	return 0;
}