#include <stdio.h>

void meses(int Valor);

int Valor;
char *meses2[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio",
"Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

int main(){	
  
    printf("Digite um número inteiro entre 1 e 12 ");
    scanf("%d", &Valor);
    meses(Valor);
    return 0;
}
void meses(int Valor){
	
	if(Valor < 1 || Valor > 12){
		printf("Numero inválido. Digite um valor valido entre 1 e 12\n");

	}else {	
		printf("Mes %d: %s\n", Valor, meses2[Valor - 1]);
	}
}