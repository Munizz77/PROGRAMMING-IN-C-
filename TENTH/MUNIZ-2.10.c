#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetores(int vetor[], int FVetor[], int Tvetor, int Minvalor, int Maxvalor){
  int Pvetor, num;

  for (Pvetor = 0; Pvetor < Tvetor; Pvetor++) {
    num =  Minvalor + (rand() % (Maxvalor - Minvalor));
    vetor[Pvetor] = num;
    FVetor[Pvetor] = -1;
  }
}

void imprimirVetor(int vetor[], int Tvetor)
{
    int Pvetor;
    for (Pvetor = 0; Pvetor < Tvetor; Pvetor++) {
      printf("%d ", vetor[Pvetor]);
    }
}

void contarFrequencia(int vetor[], int FVetor[], int Tvetor){
	int posicaoA, posicaoB, contador;

  for (posicaoA = 0; posicaoA < Tvetor; posicaoA++) {
    contador = 1;
    for(posicaoB = posicaoA + 1; posicaoB < Tvetor; posicaoB++){
      if(vetor[posicaoA] == vetor[posicaoB]){
      	contador++;
        FVetor[posicaoB] = 0;
		  }
		}
		if(FVetor[posicaoA] != 0){
			FVetor[posicaoA] = contador;
		}
  }
}

void FrequenciaVari(int vetor[], int FVetor[], int Tvetor)
{
    int Pvetor;
    for (Pvetor = 0; Pvetor < Tvetor; Pvetor++) {
      if(FVetor[Pvetor] != 0){
      printf("Valor: %d - %dx\n", vetor[Pvetor], FVetor[Pvetor]);
		}
    }
}
int main(){
	
    int Tvetor = 30, vetor[Tvetor], FVetor[Tvetor];
    int Minvalor = 1, Maxvalor = 101;

    srand( (unsigned)time(NULL) );
    gerarVetores(vetor, FVetor, Tvetor, Minvalor, Maxvalor);
    
    printf("\nValores gerados no vetor \n");
    imprimirVetor(vetor, Tvetor);   
    contarFrequencia(vetor, FVetor, Tvetor);
    printf("\n\nFrequência dos valores \n\n");
    FrequenciaVari(vetor, FVetor, Tvetor);

    return 0;
}
