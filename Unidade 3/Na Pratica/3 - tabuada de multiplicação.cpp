#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int i, num, resultado;
	
	printf("Digita um número: ");
	scanf("%d", &num);
	
	for(i=1; i <= 10; i++){
		
		resultado = num * i;
		printf("%d * %d = %d\n", num, i, resultado);	
		
	}
		
	
	
	
}
