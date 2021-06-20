#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int idade, estado, casada, solteira, viuva, separada, pessoas, sexo;
	float peso, midade, mpeso, total1, total2;

	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	casada = 0;
	solteira = 0;
	separada = 0;
	viuva = 0;
	
	
	
	while(idade != 0){
		
		printf("Informe seu peso: ");
		scanf("%f", &peso);
		printf("Qual seu sexo 1 -M/ 2 -F: ");
		scanf("%d", &sexo);
		printf("----------------\n");
		printf("Informe seu estado civil: \n 1 - Casada\n 2 - Solteiras\n 3 - Separadas\n 4 - Viúvas\n");
		scanf("%d", &estado);		
		pessoas++;	
		
		switch(estado){
			case 1: casada++;
			break;
			case 2: solteira++;
			break;
			case 3: separada++;
			break;
			case 4: viuva++;
			break;
			}
			
		
		midade = midade + idade;
		mpeso = mpeso + peso;
		
		printf("\nInforme sua idade: ");
		scanf("%d", &idade);
			
	}
	
	total1 = midade / pessoas;
	total2 = mpeso / pessoas;
	
	printf("\n----------------\n");
	printf(" Casadas: %d\n Solteiras: %d\n Separadas: %d\n Viúvas: %d\n", casada, solteira, separada, viuva);
	printf("Média idade: %.2f\n", total1);
	printf("Média de peso: %.2f\n", total2);



}
