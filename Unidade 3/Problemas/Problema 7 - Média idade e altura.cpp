#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int idade, pessoas;
	float altura, maltura, midade;
	
	
	midade = 0;
	maltura = 0;
	pessoas = 0;
	
	printf("Qual sua idade: ");
	scanf("%d", &idade);
	
	while(idade != 0)
	{
		printf("Qual sua altura: ");
		scanf("%f", &altura);
		pessoas ++;
		midade = midade + idade;
		maltura = maltura + altura;
		printf("Qual sua idade: ");
		scanf("%d", &idade);	
	}
	
	printf("A média da altura é:  %.2f\n", maltura/pessoas);
	printf("A média da idade é:  %.2f", midade/pessoas);



}
