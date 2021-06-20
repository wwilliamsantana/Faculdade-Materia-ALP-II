#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salario, aumento;
	int cargo;
	
	printf("Digite o número correspondente ao seu cargo:\n 1- Servente\n 2- Pedreiro\n 3- Mestre de obras\n 4- Técnico de segurança\n");
	printf("\nQual seu cargo?  ");
	scanf("%d", &cargo);
	printf("Qual seu salário atual?  ");
	scanf("%f", &salario);
	
		
	switch(cargo){

		case 1: printf("\nCargo: Servente\n");
				aumento = salario * 0.4;
				printf("O Aumento correspondente é R$%.2f\n", aumento);
				salario = salario + aumento;
				printf("O Novo salário é R$%.2f\n", salario); 
				break;
				
		case 2: printf("\nCargo: Pedreiro\n");
				aumento = salario * 0.35;
				printf("O Aumento correspondente é R$%.2f\n", aumento);
				salario = salario + aumento;
				printf("O Novo salário é R$%.2f\n", salario);
				break; 
				
		case 3: printf("\nCargo: Mestre de Obras\n");
				aumento = salario * 0.2;
				printf("O Aumento correspondente é R$%.2f\n", aumento);
				salario = salario + aumento;
				printf("O Novo salário é R$%.2f\n", salario);
				break; 
				
		case 4: printf("\nCargo: Técnico de segurança\n");
				aumento = salario * 0.1;
				printf("O Aumento correspondente é R$%.2f\n", aumento);
				salario = salario + aumento;
				printf("O Novo salário é R$%.2f\n", salario);
				break; 
				
		default: printf("\nNúmero Inválido");	
				 break;							
	}
	
	return(0);
	
	
}
