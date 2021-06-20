#include <stdio.h>
#include <stdlib.h>
 #include <locale.h>
 
 
 int main(){
setlocale(LC_ALL, "Portuguese");

	int vetor[30];
	int i;
	
	for(i=0; i<30; i++){
		printf("Digite o %d número: ", i+1);
		scanf("%d", &vetor[i]);
	}

	for(i=29; i>=0; i--){
		printf("\n %d", vetor[i]);
	}



}
