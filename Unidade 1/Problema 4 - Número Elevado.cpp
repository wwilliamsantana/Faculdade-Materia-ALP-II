#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, total;
	
	printf("\n Informe o primeiro número: ");
	scanf("%f", &num1);
	printf("\n Informe o segundo número: ");
	scanf("%f", &num2);
	total = pow(num1, num2);
	
	printf("\n %.2f elevado a %.2f é: %.2f", num1, num2, total);
	
	return(0);
	
}
