#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 5

 int main(){
setlocale(LC_ALL, "Portuguese");

	int vetorA[max], vetorB[max];
	int diferente, i, j;
	
	for (i=0; i<max; i++)
	{
		printf("Digite o %d número para vetor A: ", i+1);
		scanf("%d", &vetorA[i]);
	}
	printf("\n");
	for (i=0; i<max; i++)
	{
		printf("Digite o %d número para vetor B: ", i+1);
		scanf("%d", &vetorB[i]);
	}

	for(i=0; i<max; i++)
	{
		for(j=0; j<max; j++)
		{
			if(vetorA[i] == vetorB[j]){
				diferente++;
			}
		}	
		if(diferente < 1){
			printf("\nElemento diferente: ");
			printf("%d", vetorA[i]);
		}
		diferente = 0;
		
	// se precisar apenas da quantidade de números iguais, apenas deletar o ultimo if e habilitar a printf de baixo
	}
 //printf("A quantidade de números iguais é: %d ", diferente);

 	
	
}
