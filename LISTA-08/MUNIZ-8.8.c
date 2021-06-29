#include <stdio.h>

int main(){
	
	
	int tamanhoVetor = 5, numero, vetorNumero[tamanhoVetor], vetorCubo[tamanhoVetor],
	resultado = 0, posicaoVetor;

	for(posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++){
				
		printf("Informe o valor a ser inserido posicao %d do vetor: ", posicaoVetor);
		scanf("%d", &vetorNumero[posicaoVetor]);
		getchar();	
	}
		printf("\n\n");
	
  printf("Valor inseridos no vetor pelo usuário: \n");
	for(posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++){
		printf("%d\n", vetorNumero[posicaoVetor]);
	
	}	
	printf("\n\n");
	
  printf("Cubo dos valores inseridos no vetor: \n");
	for(posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++){
				
		resultado = vetorNumero[posicaoVetor] * vetorNumero[posicaoVetor] * vetorNumero[posicaoVetor];
		vetorCubo[posicaoVetor] = resultado;	
		printf("%d\n", vetorCubo[posicaoVetor]);
		
	}	
	return 0;
}