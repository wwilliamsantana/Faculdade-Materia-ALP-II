#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, num3, num4, media;
	
	printf("\nDigite o Primeiro N�mero:");
	scanf("%f", &num1);
	
	printf("Digite o Segundo N�mero:");
	scanf("%f", &num2);
	
	printf("Digite o Terceiro N�mero:");
	scanf("%f", &num3);
	
	printf("Digite o Quarto N�mero:");
	scanf("%f", &num4);
	
	media = (num1 + num2 + num3 + num4)/4;
	
	printf("\n A m�dia �: %.2f \n", media );
	
	return(0);
	
	
}
