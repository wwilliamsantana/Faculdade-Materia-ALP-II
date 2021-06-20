#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int num, op, resultado, i, num2;
	
	printf("Informe um número: ");
	scanf("%d", &num);
	
	printf("\nInforme a operação da tabuada:\n 1 - Adição\n 2 - Subtração\n 3 - MUltiplicação\n 4 - Divisão\n ");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			printf("\n ******* ADIÇÃO *******\n");
			 for(i = 1; i <= 10; i++){
			 	num2 = i;
			 	resultado = num2 + num;
			printf("%d + %d = %d\n", num, num2, resultado);
			 }
			 break;
			 
		case 2: 
			printf("\n ******* SUBTRAÇÃO *******\n");
				for(i = num; i <= num + 10; i++){
			 		num2 = i;
			 		resultado = num2 - num;
			printf("%d - %d = %d\n", num, num2, resultado);
			 }
			 break;
		case 3: 
			printf("\n ******* MULTIPLICAÇÃO *******\n");
				for(i = 1; i <= 10; i++){
			 		num2 = i;
			 		resultado = num2 * num;
			printf("%d * %d = %d\n", num, num2, resultado);
			 }
			 break;
		case 4: 
			printf("\n ******* DVISÃO *******\n");
				for(i = num; i <= num * 10; i = i + num){
			 		num2 = i;
			 		resultado = num2 / num;
			printf("%d / %d = %d\n", num2, num, resultado);
			 }
			break;			
	}
	
	return(0);
	
		
}	
