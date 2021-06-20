#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float converterp (float peso);

 int main(){
setlocale(LC_ALL, "Portuguese");

	float peso, resposta;
	
	printf("Informe seu peso em quilogramas: ");
	scanf("%f", &peso);
	resposta = converterp(peso);
	
	printf("O Peso em %.2f em libras é %.2f\n", peso, resposta);

}

float converterp(float peso){
	peso = peso * 2.68;
	return peso;
}
