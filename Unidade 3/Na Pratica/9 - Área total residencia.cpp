#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL, "Portuguese");
	int i;
	float total, atotal, largura, comprimento, fim;
	char comodo[30];
	
		
	printf("Informe o cômodo: ");
	scanf("%s", &comodo);
	
	while(strcmp(comodo, "fim") != 0){
	   {
		printf("Qual a largura do cômodo: ");
		scanf("%f", &largura);
		printf("Qual o comprimento do comôdo: ");
		scanf("%f", &comprimento);
	
		total = largura * comprimento;
		atotal = atotal + total;		
		printf("\nCaso queira finalizar escreva 'fim'\n");
		printf("Informe o cômodo: ");
		scanf("%s", &comodo);
		}
	}
	
	printf("\nA área total da residência é: %.2f", atotal);




}
