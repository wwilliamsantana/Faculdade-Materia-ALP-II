#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
setlocale(LC_ALL, "Portuguese");

	int cont, i;
	char palavra[30];
	
	printf("Informe uma palavra: ");
	scanf("%s", &palavra);
	printf("Quantas vezes deseja imprimi-la: ");
	scanf("%d", &cont);
	
	for(i=0; i<cont; i++){
		printf("%s...\n", palavra);
	}
	return(0);

}
