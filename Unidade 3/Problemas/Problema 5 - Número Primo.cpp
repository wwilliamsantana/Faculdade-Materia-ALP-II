#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int num, i, total;
	
	printf("Informe um número: ");
	scanf("%d", &num);
	
	total=0;
	for (i = 1; i <= num; i++){
		
		if (num % i == 0)
			total++;
	}
	if(total == 2)
		printf("O número é primo!");
	else
		printf("Não é primo!");
	
	return(0);

}
