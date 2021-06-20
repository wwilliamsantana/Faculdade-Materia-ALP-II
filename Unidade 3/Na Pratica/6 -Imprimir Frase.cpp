#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	char frase[80];
	int num, i;
	
	
	printf("Escreva uma frase: ");
	gets(frase);
	
	printf("Quantas vezes deseja imprima-la: ");
	scanf("%d", &num);
	
	for (i=1; i <= num; i++){
		printf("%s\n", frase);
	}

}
