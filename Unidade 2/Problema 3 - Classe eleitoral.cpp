#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade < 16){
		printf("\nNao eleitor");
	}
	else { 
		if ((idade < 18) || (idade > 65))
		printf("\nEleitor Facultativo");
		else
		printf("\nEleitor Obrigatorio");
	}
	
	return(0);
	
	
	
}

