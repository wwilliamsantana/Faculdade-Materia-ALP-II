#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int num, op, resultado, i, num2;
	
	printf("Informe um n�mero: ");
	scanf("%d", &num);
	
	printf("\nInforme a opera��o da tabuada:\n 1 - Adi��o\n 2 - Subtra��o\n 3 - MUltiplica��o\n 4 - Divis�o\n ");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			printf("\n ******* ADI��O *******\n");
			 for(i = 1; i <= 10; i++){
			 	num2 = i;
			 	resultado = num2 + num;
			printf("%d + %d = %d\n", num, num2, resultado);
			 }
			 break;
			 
		case 2: 
			printf("\n ******* SUBTRA��O *******\n");
				for(i = num; i <= num + 10; i++){
			 		num2 = i;
			 		resultado = num2 - num;
			printf("%d - %d = %d\n", num, num2, resultado);
			 }
			 break;
		case 3: 
			printf("\n ******* MULTIPLICA��O *******\n");
				for(i = 1; i <= 10; i++){
			 		num2 = i;
			 		resultado = num2 * num;
			printf("%d * %d = %d\n", num, num2, resultado);
			 }
			 break;
		case 4: 
			printf("\n ******* DVIS�O *******\n");
				for(i = num; i <= num * 10; i = i + num){
			 		num2 = i;
			 		resultado = num2 / num;
			printf("%d / %d = %d\n", num2, num, resultado);
			 }
			break;			
	}
	
	return(0);
	
		
}	
