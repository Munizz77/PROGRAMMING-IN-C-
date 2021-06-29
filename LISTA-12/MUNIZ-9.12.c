#include <stdio.h>
#include <math.h>

float z, e = 2.71828, resultado;
float sigmoid(float z);

int main() {
	
    printf("\nDigite um valor: ");
    scanf("%f",&z);	
    
    resultado = sigmoid(z);
    printf("\nResultado: %.15f", resultado);
    return 0;
}
float sigmoid(float z) {
     return 1 / (1 + (pow(e, -z)));
}
