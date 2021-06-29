#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand( (unsigned)time(NULL) );
	int  vetorBin[4], i,b = 2, expoente, calculoDoExpoente, respostaCerta, respostaJogador,erros = 0, acertos = 0;
	
	printf("\nJogo dos números Binários\nVoçê deve acertar o número decimal correspondente.\nErros tolerados:5\nDesenvolvedor: Hudson Salis Evangelista\n\n");

	do{
		respostaCerta = 0, respostaJogador = 0;
		printf("- Qual é a conversão em decimal do número binário: ");
		
		for(i = 4 - 1; i >= 0; i--){
			vetorBin[i] = rand() % 2;
			printf("%d", vetorBin[i]);
			calculoDoExpoente = 1;
			expoente = 1;
			while(expoente <= i){
				calculoDoExpoente *= b;
				++expoente;
			}	respostaCerta += (vetorBin[i] * calculoDoExpoente);
		}
		printf("\n- Sua resposta: ");
		scanf("%d", &respostaJogador);
		
		if(respostaCerta == respostaJogador){
			printf("\nVocê acertou a resposta! Parabéns.\n");
			acertos++;
		}else{
			printf("\nERROU!!!\n");
			erros++;
		}
		printf("\n          PLACAR          \n");
		printf("--------------------------\n");
		printf(" Acertos: %d\n", acertos);
		printf(" Erros: %d\n\n", erros);
	}while(erros < 5);

  if(erros >= 5){
	  printf("VOÇÊ ERROU 5 QUESTÕES.\nEND GAME.");
  }
  return 0;
}