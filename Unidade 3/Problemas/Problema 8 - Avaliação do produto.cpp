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
		printf("\nQual sua opini�o:\n 1 - satisfat�rio\n 2 - indiferente\n 3 - insatisfat�rio\n");
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
	printf("N�meros de clientes que respondeream satisfat�rio �: %.2f\n", smedia);
	printf("N�mero de clientes que responderam insatisfat�rio �: %.2f\n", imedia);
	printf("N�meros de clientes que respondeream indiferente �: %d\n", pessoas);
	printf("M�dia de idade que respondeream satisfat�rio �: %.2f \n", media);
	
}
