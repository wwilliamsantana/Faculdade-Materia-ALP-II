#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 
 
 int main(){
setlocale(LC_ALL, "Portuguese");

	char nome[30];
	int tam, i;
	
	printf("Informe seu nome: ");
	gets(nome);
	
	tam = strlen(nome);
	
	for(i=tam-1; i>=0; i--){
		
		printf("%c", nome[i]);
	}


}
