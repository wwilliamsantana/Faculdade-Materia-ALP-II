#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, resultado;
	int op;
	
	printf("\nDigite o primeiro número: ");
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	printf("\nEscolha a operação: \n 1- Soma \n 2- Subtração \n 3- Multiplicação \n 4- Divisão \n ");
	scanf("%d", &op);
	
	switch (op){
		case 1:
			resultado = num1 + num2;
			printf("A soma é: %.2f\n", resultado);
			break;
		
		case 2:
			resultado = num1 - num2;
			printf("A subtração é: %.2f\n", resultado);
			break;
			
		case 3:
			resultado = num1 * num2;
			printf("A multiplicação é: %.2f\n", resultado);
			break;
		
		case 4:
			resultado = num1 / num2;
			printf("A divisão é: %.2f\n", resultado);
			break;
			
		default:
			printf("Opção inválida. \n");
			break;
	}
	
	return(0);
			
	
}
