#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");

	int num, maior, menor;
	
	printf("Digite o 1� n�mero: ");
	scanf("%d", &num);
	maior = num;
	menor = num;
	
	printf("Digite o 2� n�mero: ");
	scanf("%d", &num);
	if (num > maior)
		maior = num;
	if	(num < menor)
		menor = num;
		
	printf("Digite o 3� n�mero: ");
	scanf("%d", &num);
	if (num > maior)
		maior = num;
	if	(num < menor)
		menor = num;
		
	printf("Digite o 4� n�mero: ");
	scanf("%d", &num);
	if (num > maior)
		maior = num;
	if	(num < menor)
		menor = num;
		
	printf("Digite o 5� n�mero: ");
	scanf("%d", &num);
	if (num > maior)
		maior = num;
	if	(num < menor)
		menor = num;
	
	
	printf("\nO maior n�mero � %d", maior);
	printf("\nO menor n�mero � %d", menor);
	
	return(0);
	
}
