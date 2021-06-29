#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int vetor[8], valor, cont = 0;
  srand( (unsigned)time(NULL) );;
	
	printf("Insira um numero para pesquisar no vetor:");
	scanf("%d", &valor);
	for (int i = 0; i < 8; i++){
    vetor[i] = rand() % 10;
		if(valor == vetor[i]){
      printf("\nEsse numero está dentro do vetor!\nNumero: %d\nPosicao: %d",valor,i);
    }else{
      cont++;
    }
	}
  if(cont == 8){
    printf("\nEsse numero nao existe no vetor.");
  }	
	
	return 0;
}