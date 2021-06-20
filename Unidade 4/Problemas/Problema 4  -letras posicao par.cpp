#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 
 
 int main(){
setlocale(LC_ALL, "Portuguese");

	char nome[30];
	int tam, i;
	
	printf("Escreva seu nome: ");
	gets(nome);
	
	tam = strlen(nome);
	
	for(i=0; i<tam; i++)
	{
		if (i % 2 == 0)
			printf("\n %c", nome[i]);
		}
		
}
