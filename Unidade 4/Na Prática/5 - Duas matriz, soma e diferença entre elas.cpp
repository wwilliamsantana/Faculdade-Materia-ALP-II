#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
setlocale(LC_ALL, "Portuguese");

	int matrizA[5][5], matrizB[5][5], i, j, k;
	printf("\n MATRIZ A\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			
			printf("[%d, %d]:",i+1, j+1);
			scanf("%d", &matrizA[i][j]);
		}
	}
	printf("\n MATRIZ B\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			
			printf("[%d, %d]:",i+1, j+1);
			scanf("%d", &matrizB[i][j]);
		}
	}
	printf("\nA Soma de Matrize!\n");
	
	for(i=0; i<5; i++){
		printf("|\t");
		for(j=0; j<5; j++){
			printf("%d\t", matrizA[i][j] + matrizB[i][j]);
		}
		printf("|\n");
		 	
	}

	printf("\nA Subtração de Matrize!\n");
	
	for(i=0; i<5; i++){
		printf("|\t");
		for(j=0; j<5; j++){
			printf("%d\t", matrizA[i][j] - matrizB[i][j]);
		}
		printf("|\n");
		 	
	}

}
