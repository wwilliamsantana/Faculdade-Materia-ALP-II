#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 20
 
struct funcionario
	{
		int matricula;
		float salario;
		char nome[50], setor[30];
	};
 

 int main(){
setlocale(LC_ALL, "Portuguese");

	struct funcionario ficha[TAM];
	int buscar, i, acha;
	char op;
	
	for(i=0; i<TAM; i++)
	{
		printf("Digite a matrícula: ");
		scanf("%d", &ficha[i].matricula);
		fflush(stdin);
		printf("Informe seu nome: ");
		scanf("%50[^\n]s", &ficha[i].nome);
		fflush(stdin);
		printf("Informe seu setor: ");
		scanf("%30[^\n]s", &ficha[i].setor);
		fflush(stdin);
		printf("Informe seu salário: ");
		scanf("%f", &ficha[i].salario);
		fflush(stdin);
	}
	
	do{
		
		printf("Deseja realizar uma buscar [S/N]: ");
		scanf("%c", &op);
		fflush(stdin);	
	}
	while((op != 's') && (op != 'S') && (op!='n') && (op!= 'N'));
	
	while((op == 's') || (op == 'S'))
	{
		printf("Informe o número da matrícula: ");
		scanf("%d", &buscar);
		fflush(stdin);
		
		i=0;
		acha=0;
		while((i<TAM)&&(acha == 0))
		{
			if(ficha[i].matricula == buscar)
				acha = 1;
			else
				i++;
		}
		if (acha == 1)
		{
			printf("\nMatrícula: %d\n", ficha[i].matricula);
			printf("Nome: %s\n", ficha[i].nome);
			printf("Setor: %s\n", ficha[i].setor);
			printf("Salário: %.2f\n", ficha[i].salario);
		}
		else
			printf("\n Matrícula não encontrada!");
			
		do{
			printf("Deseja realizar uma buscar [S/N]: ");
			scanf("%c", &op);
			fflush(stdin);	
		}while((op != 's') && (op != 'S') && (op!='n') && (op!= 'N'));
		
		
	}
	

}
