#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, resultado;
	int op;
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
	printf("\nEscolha a opera��o: \n 1- Soma \n 2- Subtra��o \n 3- Multiplica��o \n 4- Divis�o \n ");
	scanf("%d", &op);
	
	switch (op){
		case 1:
			resultado = num1 + num2;
			printf("A soma �: %.2f\n", resultado);
			break;
		
		case 2:
			resultado = num1 - num2;
			printf("A subtra��o �: %.2f\n", resultado);
			break;
			
		case 3:
			resultado = num1 * num2;
			printf("A multiplica��o �: %.2f\n", resultado);
			break;
		
		case 4:
			resultado = num1 / num2;
			printf("A divis�o �: %.2f\n", resultado);
			break;
			
		default:
			printf("Op��o inv�lida. \n");
			break;
	}
	
	return(0);
			
	
}
