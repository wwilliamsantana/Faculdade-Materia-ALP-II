#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int codestado, codcarga, peso;
	float  total, imposto, preco, precoq, taxaimposto;
	
	printf("Informe o c�digo de estado: ");
	scanf("%d", &codestado);
	printf("Informe o c�digo da carga: ");
	scanf("%d", &codcarga);
	printf("Informe o peso em tonelada: ");
	scanf("%d", &peso);
	
		switch(codestado){
			case 1: taxaimposto = 0.20;
					break;
			case 2: taxaimposto = 0.15;
					break;
			case 3: taxaimposto = 0.10;
					break;
			case 4: taxaimposto = 0.05;
					break;
			default: taxaimposto = 0;
					printf("N�mero Inv�lido");
					break;
	}

	if (codcarga >= 10 && codcarga <= 20){
		precoq= 180;
	}
	else if (codcarga >= 21 && codcarga <= 30){
		precoq= 120;
	}
	else if (codcarga >= 31 && codcarga <= 40){
		precoq= 230;
	}
	else {
		printf("\nC�digo da Carga inv�lido!");
		precoq = 0;
	}

	imposto = peso * 1000 * precoq * taxaimposto;
	preco = peso  * 1000 * precoq;
	total = preco + imposto;
	
	printf("\nO peso da carga em Kg � %d", peso * 1000);
	printf("\nO pre�o da carga � R$%.2f", preco);
	printf("\nValor do Imposto � R$%.2f", imposto);
	printf("\nValor total da carga � R$%.2f", total);
	
	 
	

	
}
