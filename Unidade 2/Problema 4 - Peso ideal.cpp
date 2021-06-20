#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float altura, peso; 
	char sexo;
	
	printf("Informe seu sexo (M ou F): ");
	scanf("%c", &sexo);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	if ((sexo == 'f') || (sexo == 'F'))
		{	
		peso = (62.1 * altura) - 44.7;
		}
		else{
			peso= (72.7 * altura) - 58;
			}
	
	printf("\nO sexo é: %c", sexo);
	printf("\nSua altura é: %.2f", altura);
	printf("\nSeu peso ideal é: %.2f", peso );
	
return(0);	
}
