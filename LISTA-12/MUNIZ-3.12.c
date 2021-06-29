#include <stdio.h>
 
void predigito(char primeiroDigito, char proximoDigito);
void posdigito(char digitoRomano, int numeroArabico);
void imprimirValorRomanoConvertido(int numeroArabico);
 
char digitosRomanos[50];
int indice = 0;
int numeroArabico;

int main(){
 
  printf("Informe um valor entre 1 e 50: ");
  scanf("%d", &numeroArabico);
  imprimirValorRomanoConvertido(numeroArabico);

  return 0;
}
 

void predigito(char primeiroDigito, char proximoDigito){
    digitosRomanos[indice++] = primeiroDigito;
    digitosRomanos[indice++] = proximoDigito;
}
 
void posdigito(char posDigito, int numeroArabico){
    int contador;
    for (contador = 0; contador < numeroArabico; contador++)
        digitosRomanos[indice++] = posDigito;
}

void imprimirValorRomanoConvertido(int numeroArabico){
	int digito;
  
	if (numeroArabico <= 0){
  	
  	printf("Valor inválido!");
  
  }else{
	  while (numeroArabico != 0){
			if (numeroArabico == 50 ){
			  if (numeroArabico < (50 + 4 * 10)){
			    posdigito('L', numeroArabico / 50);
			    numeroArabico = numeroArabico - (numeroArabico / 50) * 50;
			  }
			        
			}else if (numeroArabico >= 10){
				if (numeroArabico < (10 + 3 * 10)){
			    posdigito('X', numeroArabico / 10);
			    numeroArabico = numeroArabico - (numeroArabico / 10) * 10;
			  }else{
			    predigito('X','L');
			    numeroArabico = numeroArabico - (50 - 10);
			  }
			    	
			}else if (numeroArabico >= 5){
				if (numeroArabico < (5 + 4 * 1)){
			    posdigito('V', numeroArabico / 5);
			    numeroArabico = numeroArabico - (numeroArabico / 5) * 5;
			  }else{
			    predigito('I', 'X');
			    numeroArabico = numeroArabico - (10 - 1);
			  }
			        
			  }else if (numeroArabico >= 1){
			    if (numeroArabico < 4){
			    	posdigito('I', numeroArabico / 1);
			    	numeroArabico = numeroArabico - (numeroArabico / 1) * 1;
			    }else{
			    	predigito('I', 'V');
			    	numeroArabico = numeroArabico - (5 - 1);
			    }
			  }
		}
		printf("O número romano equivalente é: ");
	    for(digito = 0; digito < indice; digito++){
			printf("%c", digitosRomanos[digito]);
	    }  
      printf("\n");
	}
}


