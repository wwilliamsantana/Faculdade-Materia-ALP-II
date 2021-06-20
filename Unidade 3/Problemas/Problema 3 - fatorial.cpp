#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int num, i, fat;
	
	printf("Informe um número: ");
	scanf("%d", &num);
	fat = 1;
	for (i = 1; i <= num; i++)
		fat = fat * i;
	printf("O fatorial é: %d ", fat);
	



}
