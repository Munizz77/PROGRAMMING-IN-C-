#include <stdio.h>

void gerarM(int Tdiasanos, int Tmeses, int M[Tdiasanos][Tmeses]);

void datacompleta (int Tdiasanos, int Tmeses, int M[Tdiasanos][Tmeses], int valor);

int main() {

  int Tdiasanos = 31, Tmeses = 12, M[Tdiasanos][Tmeses],
  valor;

	gerarM(Tdiasanos, Tmeses, M);
	
	printf("Digite um valor inteiro entre 1 e 365 para exibir a data correspondente:\n");
  scanf("%d", &valor);

	datacompleta(Tdiasanos, Tmeses, M, valor);

  return 0;
}

void gerarM(int Tdiasanos, int Tmeses, int M[Tdiasanos][Tmeses]){
	int dia, mes, diaDoAno = 0;
	int limiteDiasMes[11] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

	for (mes = 0; mes < Tmeses; mes++) {  
    for (dia = 0; dia < Tdiasanos; dia++) {
      diaDoAno++;
      if(diaDoAno == limiteDiasMes[mes]){
        M[dia][mes] = diaDoAno;        	
				break;
		  }else{
			  M[dia][mes] = diaDoAno;        		
		  }
    }

  }	
}

void datacompleta (int Tdiasanos, int Tmeses, int M[Tdiasanos][Tmeses], int valor){
	int dia, mes;
	
  for (dia = 0; dia < Tdiasanos; dia++) {
    for (mes = 0; mes < Tmeses; mes++) {  
      if(valor == M[dia][mes]){
        if( mes < 10 ){
          printf("O valor %d corresponde a data %d/0%d/2021 \n", valor, dia+1, mes+1);
				}else{
					printf("O valor %d corresponde a data %d/%d/2021 \n", valor, dia+1, mes+1);
				}
			}
    }

  }
}