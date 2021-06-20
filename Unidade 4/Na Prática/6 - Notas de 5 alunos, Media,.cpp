#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	struct dados{
		char nome[20];
		float nota[4];
		float media;
		float cadastro;
		};
		

 int main(){
setlocale(LC_ALL, "Portuguese");

	struct dados boletim[5];
	struct dados boletimt;
	
	int i, j;
	float soma, notas = 0;
	for (i=0; i<5; i++){
		j=0;
		
		printf("Digite seu nome: ");
		scanf("%20[^\n]s", boletim[i].nome);
		fflush(stdin);
			for(j=0; j<4; j++){
				printf("Digite a %d° nota: ", j+1);
				scanf("%f", &boletim[i].nota[j]);
				fflush(stdin);
				soma = soma + boletim[i].nota[j];
			}
			
			boletim[i].media = soma/4;
			soma=0;
			printf("\n** %s - %0.1f - %0.1f - %0.1f - %0.1f\n", boletim[i].nome, boletim[i].nota[0], boletim[i].nota[1], boletim[i].nota[2], boletim[i].nota[3]);
			
		}

			for (i=0; i<4; i++){
				for(j=i+1; j<5; j++){
					if(boletim[i].media > boletim[j].media)
					{
						boletimt = boletim[i];
						boletim[i] = boletim[j];
						boletim[j] = boletimt;
						
					}
				}
			}

			for(i=0; i<5; i++){
				printf("\n\n %s - %0.1f\n", boletim[i].nome, boletim[i].media);
				printf(" %0.1f; %0.1f; %0.1f; %0.1f", boletim[i].nota[0], boletim[i].nota[1], boletim[i].nota[2], boletim[i].nota[3]);
				
				
			}



}
