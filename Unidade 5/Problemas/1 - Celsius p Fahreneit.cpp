#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float convertet(float celsius);


 int main(){
setlocale(LC_ALL, "Portuguese");

	float celsius, resposta;
	
	printf("Informe a temperatura em graus Celsius: ");
	scanf("%f", &celsius);
	resposta = convertet(celsius);
	
	printf("A temperatura em %.2f Fahrenheit é %.2f\n", celsius, resposta);
	
}


float convertet(float celsius){
	float temp;
	temp = celsius * 1.8 + 32;
	return temp;
	
}
