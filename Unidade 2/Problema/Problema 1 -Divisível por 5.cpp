#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");

	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if (num % 5 == 0){
		printf("O número %d é divisível por 5", num);
	}
	else { 
		printf("O número %d não é divisível por 5.", num);
	}
	
	return(0);
}
