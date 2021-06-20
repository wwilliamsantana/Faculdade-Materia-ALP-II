#include <stdio.h>
#include <stdlib.h>
 #include <locale.h>
 
 
 int main(){
setlocale(LC_ALL, "Portuguese");

	int vetorA[5], vetorB[5], vetorC[5];
	int i, j, troca;
	
	for(i=0; i<5; i++)
	{
		printf("Digite o %d número do vetor A: ", i+1);
		scanf("%d", &vetorA[i]);
		printf("Digite o %d número do vetor B: ", i+1);
		scanf("%d", &vetorB[i]);
		vetorC[i] = vetorA[i] + vetorB[i];
	}
	for(i = 0; i<4; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(vetorC[i] > vetorC[j])
			{
				troca = vetorC[i];
				vetorC[i] = vetorC[j];
				vetorC[j] = troca; 
			}
		}
	}
	
	for(i=0; i<5; i++){
		printf("%d - ", vetorC[i]);
	}
	return(0);
}
