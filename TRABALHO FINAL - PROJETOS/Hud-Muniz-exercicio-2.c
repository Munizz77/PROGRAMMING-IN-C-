#include <stdio.h>

float areatriangulo(float bs, float altura);

int main(){
	
	float bs, altura, area;

  printf("\nCalculando a área de um triângulo");

  printf("\nDigite a bs do triângulo:");
  scanf("%f", &bs);

     getchar();
	
  printf("\nDigite a altura do triângulo: ");
  scanf("%f", &altura);

  getchar();

	area = areatriangulo(bs, altura);
    
  printf("\nOResultado da área do triângulo é: %.2f \n", area);

  return 0;
}

float areatriangulo(float bs, float altura){
	return (bs * altura) / 2;
}
