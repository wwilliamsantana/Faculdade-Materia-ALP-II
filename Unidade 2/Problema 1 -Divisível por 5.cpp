#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");

	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if (num % 5 == 0){
		printf("O n�mero %d � divis�vel por 5", num);
	}
	else { 
		printf("O n�mero %d n�o � divis�vel por 5.", num);
	}
	
	return(0);
}
