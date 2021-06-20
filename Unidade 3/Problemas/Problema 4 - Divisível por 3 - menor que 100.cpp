#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int i, num;
	
	printf("Digite um número pra ser divisivel por 3:");
	scanf("%d", &num);
	
	for(i = 3; i <=num; i=i+3)
	{printf("%d \n", i);
 	}
	return(0);





}
