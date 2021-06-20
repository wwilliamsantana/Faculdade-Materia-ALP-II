#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int i, num;
	float resultado, d;
	
	resultado = 0;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		
		d = i;
		resultado = resultado + 1/d;
	}

			printf("Valor de S: %.3f", resultado);
	
	return(0);
}
	
