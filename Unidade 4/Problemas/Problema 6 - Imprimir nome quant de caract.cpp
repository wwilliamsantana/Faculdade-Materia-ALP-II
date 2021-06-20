#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 
 
 int main(){
setlocale(LC_ALL, "Portuguese");
	char nome[30];
	int i, tam;
	
	printf("Infome seu nome: ");
	gets(nome);
	
	tam = strlen(nome);
	
	for(i=0; i<tam; i++){
		printf("%s\n", nome);
	}



}
