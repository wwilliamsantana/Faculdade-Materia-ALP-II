#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 10

 int main(){
setlocale(LC_ALL, "Portuguese");

	int vetor[max];
	int i,j, ord;
	
	for(i=0; i<max; i++)
	{
		printf("Digite o %d número: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for (i=0; i<max; i++){
		
		for(j=i+1; j<max; j++){
			
			if(vetor[i] < vetor[j]){
				ord = vetor[i];
				vetor[i] = vetor[j];
				vetor[j]= ord;
			}	
		}
		
		printf("%d -", vetor[i]);
		
	}


}
