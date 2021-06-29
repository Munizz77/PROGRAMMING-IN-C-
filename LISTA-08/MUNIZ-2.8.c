#include <stdio.h>

int main(){
	
	int ninicial = 2, nfinal = 20;
	int tvetor = ((nfinal - ninicial)/2)+1;
	int pares[tvetor], pvetor, valor = 0;
	
	for(pvetor = 0; pvetor < tvetor; pvetor++){
		pares[pvetor] = valor + 2;
		valor +=2;
	}

  printf("\nOs valores pares que vão do número 2 ao 20 são:\n");
	for(pvetor = 0; pvetor < tvetor; pvetor++){
		printf("%d\n", pares[pvetor]);
	}		
	return 0;
}