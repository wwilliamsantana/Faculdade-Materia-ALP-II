#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");

	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if (num % 3 == 0)
		printf("Esse n�mero � divis�vel por 3");
	if (num % 7 == 0)
		printf("\nEsse n�mero � divis�vel por 7");
		
	return(0);
}
