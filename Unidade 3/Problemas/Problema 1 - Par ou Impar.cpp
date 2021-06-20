#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	 setlocale(LC_ALL, "Portuguese");
	 
	 int par, impar, num;
	 
	par= 0;
	impar= 0;
	
	printf("Informe um número: ");
	scanf("%d", &num);
	
	while(num != 0)
	{
		if(num % 2 == 0)
			par++;
		else
			impar++;
		printf("Informe o número: ");
		scanf("%d", &num);
	}
	
	printf("A quantidade de números par é:  %d\n", par);
	printf("A quantidade de números impar é:  %d", impar);
	
	return(0);
	
	
}
