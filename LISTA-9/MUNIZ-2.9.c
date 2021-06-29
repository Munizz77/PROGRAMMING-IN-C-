#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand( (unsigned)time(NULL) );
  int vetorA[5],vetorB[8],vetorC[5],vetorD[8],i,j,erro = 0,numAleatorio;

  printf("\n--Vetor A--\n");
	for (i = 0; i < 5; i++) {
    numAleatorio = rand() % 20;
    vetorA[i] = numAleatorio;
    printf("\n Posição: %d = Número %d", i,vetorA[i]);
    vetorC[i] = numAleatorio;
	}
  printf("\n\n--Vetor B--\n");
  for (i = 0; i < 8; i++) {
    numAleatorio = rand() % 10;
    vetorB[i] = numAleatorio;
    printf("\n Posição: %d = Número %d", i,vetorB[i]);
    vetorD[i] = numAleatorio;
	}
  printf("\n\n--Vetores em COMUM--\n");
  for(i = 0; i < 8;i++ ){
      for(j = 0; j < 5; j++){
        if(vetorB[i] == vetorA[j]){
          printf("\nVetores em comum: %d",vetorB[i]);
        }else{
          erro++;
        }
      }
  }
  if(erro == 8){
    printf("\nNão existem números em comum entre os dois vetores.");
  }
  return 0;
}