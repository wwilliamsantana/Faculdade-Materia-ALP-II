#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");

	int num, maior, menor;
	
	printf("Digite o 1° número: ");
	scanf("%d", &num);
	maior = num;
	menor = num;
	
	printf("Digite o 2° número: ");
	scanf("%d", &num);
	if (num > maior)
		maior = num;
	if	(num < menor)
		menor = num;
		
	printf("Digite o 3° número: ");
	scanf("%d", &num);
	if (num > maior)
		maior = num;
	if	(num < menor)
		menor = num;
		
	printf("Digite o 4° número: ");
	scanf("%d", &num);
	if (num > maior)
		maior = num;
	if	(num < menor)
		menor = num;
		
	printf("Digite o 5° número: ");
	scanf("%d", &num);
	if (num > maior)
		maior = num;
	if	(num < menor)
		menor = num;
	
	
	printf("\nO maior número é %d", maior);
	printf("\nO menor número é %d", menor);
	
	return(0);
	
}
