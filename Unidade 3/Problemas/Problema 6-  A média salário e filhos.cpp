#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	float salario, salariosoma, filhosoma, msalario;
	int filhos, habitantes;
	
	msalario = 0;
	filhosoma = 0;
	habitantes = 0;
	salariosoma = 0;
	
	printf("Informe seu sal�rio: ");
	scanf("%f", &salario);
	
	while (salario != -1){
		printf("Informe o n�mero de filhos: ");
		scanf("%d", &filhos);
		habitantes++;
			if(salario > msalario)
				msalario = salario;
			filhosoma = filhosoma + filhos;
			salariosoma = salariosoma + salario;
			printf("Informe o sal�rio: ");
			scanf("%f", &salario);	
	}
	printf("A M�dia de sal�rios e: %.2f\n", salariosoma/habitantes);
	printf("A m�dia de filhos �: %.2f\n", filhosoma/habitantes);
	printf("O maior sal�rio �: %.2f\n", msalario);
	



}
