#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int num, maior, menor, impar, par; 
	float total, total2;

	maior = 0;
	menor = HUGE_VAL;
	impar = 0;
	par = 0;

	
	printf("Informe um número inteiro: ");
	scanf("%d", &num);
	
	while (num != 0){
		total = total + num;
		total2++;
		
		if(num < menor){
			menor = num;
		}else{
			if(num > maior){
				maior = num;
			}
		}
		
			if(num % 2 == 0){
			 	par++;
			 	}else{
			 		impar++;
				 }
			
		printf("Informe um número inteiro: ");
		scanf("%d", &num);		
	}
	
	printf("Média: %.2f\n", total/total2);
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Par: %d\n", par);
	printf("Impar: %d\n", impar);


}
