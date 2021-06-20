#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");

	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if (num % 3 == 0)
		printf("Esse número é divisível por 3");
	if (num % 7 == 0)
		printf("\nEsse número é divisível por 7");
		
	return(0);
}
