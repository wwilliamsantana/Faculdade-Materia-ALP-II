#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int idade, op, pessoas;
	float smedia, smediaidade, imedia, media; 

	smedia = 0;
	smediaidade = 0;
	imedia = 0;
	pessoas = 0;

	printf("Qual sua idade: ");
	scanf("%d", &idade);
	
	while (idade != 0){
		do{
		printf("\nQual sua opinião:\n 1 - satisfatório\n 2 - indiferente\n 3 - insatisfatório\n");
		scanf("%d", &op);
		}while ((op !=1) && (op != 2) && (op != 3));
		
			if(op == 1){
				smedia++;
				smediaidade = smediaidade + idade;
			}
			else{
				if(op == 3){
					imedia++;
				}else{
					 pessoas++;
				}			
			}
				
		system("cls");
		printf("Qual sua idade: ");
		scanf("%d", &idade);
	}
	media = smediaidade/smedia;
	printf("Números de clientes que respondeream satisfatório é: %.2f\n", smedia);
	printf("Número de clientes que responderam insatisfatório é: %.2f\n", imedia);
	printf("Números de clientes que respondeream indiferente é: %d\n", pessoas);
	printf("Média de idade que respondeream satisfatório é: %.2f \n", media);
	
}
