#include <stdio.h>

int main(){
	
	int vetor1[10], vetor2[10], somavetor[10], 
  pvetor, valorElementoPar = 0;

	printf("Primeiro vetor\n");
  printf("Os números pares que vão do número 2 ao 20 são: \n");
	for(pvetor = 0; pvetor < 10; pvetor++){
		
		vetor1[pvetor] = valorElementoPar + 2;
		valorElementoPar +=2;
		
		printf("posicao[%d]: %d\n", pvetor, vetor1[pvetor]);	
	}
	printf("Segundo Veto\n");
  printf("A sequência de números que vão de 10 a 19 são: \n");
	for(pvetor = 0; pvetor < 10; pvetor++){
	
		vetor2[pvetor] = pvetor + 10;		
		printf("posicao[%d]: %d\n", pvetor, vetor2[pvetor]);
	}
	printf("\nValores do Vetor Soma");
  printf("\nA soma de cada valor do primeiro vetor com o vetor segundo vetor é:");
	for(pvetor = 0; pvetor < 10; pvetor++){
		
		somavetor[pvetor] = vetor1[pvetor] + vetor2[pvetor];		
		printf("posicao[%d]: %d\n", pvetor, somavetor[pvetor]);
	}

	return 0;
}