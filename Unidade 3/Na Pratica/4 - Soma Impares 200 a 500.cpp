#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int num, i;
	
	for(i= 200; i <= 500; i++){
		if (i % 2 == 1){
		num = num + i;
		}	
	}

	printf("Resultado da soma de números ímpares: %d\n", num);

}
