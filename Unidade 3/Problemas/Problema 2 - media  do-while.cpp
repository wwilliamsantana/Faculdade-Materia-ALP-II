#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	float nota, soma, media;
	int cod, i, nnota, naprovado, nreprovado;
	
	naprovado = 0;
	nreprovado = 0;
	printf("Informe o números de notas da disciplina: ");
	scanf("%d", &nnota);
	
	do{
		printf("Informe o codigo do aluno: ");
		scanf("%d", &cod);
		soma = 0;
		
		if (cod != 0){
			for (i = 1; i<=nnota; i++){
				printf("Informe a %d nota do aluno: \n", i);
				scanf("%f", &nota);
				soma = soma + nota;
			}
			media = soma/nnota;
			if(media >= 6)
				naprovado ++;
			else
				nreprovado++;
		}
	}
	while (cod !=0);
	
	printf("O número de aprovados é: %d\n ", naprovado);
	printf("O número de reprovado é %d\n", nreprovado);
	
	return(0);
	



}
