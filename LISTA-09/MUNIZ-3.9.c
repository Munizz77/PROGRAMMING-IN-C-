#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int vetor[], int tvetor){
    int vetorp;
    for (vetorp = 0; vetorp < tvetor; vetorp++) {
        int num = rand() % 1000;
        	vetor[vetorp] = num;
    }
}
void imprimirMenorValor(int vetor[], int tvetor){
	int menorValor = vetor[0], maiorValor = vetor[0];
	int vetorp;
	
	for(vetorp = 1; vetorp < tvetor; vetorp++){
		if(menorValor > vetor[vetorp]){
			menorValor = vetor[vetorp];
		}else if (vetor[vetorp] > maiorValor){
			maiorValor = vetor[vetorp];
		}
	}
		
	printf("\nO maior valor do vetor é: %d", maiorValor);
	printf("\nO menor valor do vetor é: %d", menorValor);
}

void imprimirVetor(int vetor[], int tamanhoVetor)
{
    int posicaoVetor;
    for (posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
        	printf("%d ", vetor[posicaoVetor]);
    }
}

  
int main(){
    int tamanhoVetor = 50, vetor[tamanhoVetor];

    srand(time(NULL));
    gerarVetor(vetor, tamanhoVetor);
    
    printf("Todos os valores do vetor: \n");
    imprimirVetor(vetor, tamanhoVetor);
    
    printf("\n\n");
    imprimirMenorValor(vetor, tamanhoVetor);

    return 0;
}