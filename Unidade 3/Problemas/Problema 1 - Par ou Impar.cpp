#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	 setlocale(LC_ALL, "Portuguese");
	 
	 int par, impar, num;
	 
	par= 0;
	impar= 0;
	
	printf("Informe um n�mero: ");
	scanf("%d", &num);
	
	while(num != 0)
	{
		if(num % 2 == 0)
			par++;
		else
			impar++;
		printf("Informe o n�mero: ");
		scanf("%d", &num);
	}
	
	printf("A quantidade de n�meros par �:  %d\n", par);
	printf("A quantidade de n�meros impar �:  %d", impar);
	
	return(0);
	
	
}
