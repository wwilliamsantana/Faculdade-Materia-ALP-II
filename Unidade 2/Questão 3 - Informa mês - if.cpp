#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, op;
	
	printf("Informe um número de 1 a 12 correspondente ao mês do ano: ");
	scanf("%d", &num);
	
	if (num == 1){
		printf("\nJaneiro");
	}
	if (num == 2){
		printf("\nFevereiro");
	}
	if (num == 3){
		printf("\nMarço");
	}
	if (num == 4){
		printf("\nAbril");
	}
	if (num == 5){
		printf("\nMaio");
	}
	if (num == 6){
		printf("\nJunho");
	}
	if (num == 7){
		printf("\nJulho");
	}
	if (num == 8){
		printf("\nAgosto");
	}
	if (num == 9){
		printf("\nSetembro");
	}
	if (num == 10){
		printf("\nOutubro");
	}
	if (num == 11){
		printf("\nNovembro");
	}
	if (num == 12){
		printf("\nDezembro");
	}
		
	

}
