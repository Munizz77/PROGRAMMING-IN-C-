#include <stdio.h>

long double resultado = 1.0;
int portcalc(int Bs, int expo);
int main() {

  int Bs, expo;

  printf("\nO potencial de um nemero é:");

  printf("\nDigite o valor da Base:");
  scanf("%d", &Bs);

  getchar();

  printf("\nDigite o valor do Expoente:");
  scanf("%d", &expo);

  getchar();
    
	resultado = portcalc(Bs, expo);
  printf("Resultado = %.0Lf\n", resultado);
  return 0;
}

int portcalc(int Bs, int expo){
	
  if (expo != 0){
    return (Bs * portcalc(Bs, expo - 1));
  }else{
    return 1;
  }
}
