#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int num, i, total;
	
	printf("Informe um n�mero: ");
	scanf("%d", &num);
	
	total=0;
	for (i = 1; i <= num; i++){
		
		if (num % i == 0)
			total++;
	}
	if(total == 2)
		printf("O n�mero � primo!");
	else
		printf("N�o � primo!");
	
	return(0);

}
