#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");

	int op;
	float total;
	
	total = 0;
	
	printf("Escolha seu prato:\n 1- Italiano\n 2- Japonês\n 3- Salvadorenho\n");
	printf("\nInforme o prato desejado:");
	scanf("%d", &op);
	
	
	switch (op){
		case 1: 
			total = total + 750;
		break;
		
		case 2: 
			total = total + 324;
		break;
		
		case 3:
			total = total + 545;
		break;
	}
	
	printf("\nEscolha sua bebida:\n 1- Chá\n 2- Suco de laranja\n 3- Refrigerante\n");
	printf("\nInforme a bebida desejada:");
	scanf("%d", &op);
	
		switch (op){
		case 1: 
			total = total + 30;
		break;
		
		case 2: 
			total = total + 80;
		break;
		
		case 3:
			total = total + 90;
		break;
	}
	
	printf("\nO total de calorias do seu prato é %.2f", total);
	
	
}
