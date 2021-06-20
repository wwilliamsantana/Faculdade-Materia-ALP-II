#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define max 10

 int main(){
setlocale(LC_ALL, "Portuguese");
	
	char letra;
	char nome[max];
	int i;
	
	printf("Informe seu nome: ");
	gets(nome);
	strlwr(nome);
	if (strlen(nome) % 2 == 1)
		{	
			printf("Possui número ímpar de caractere!\n");
			for(i=0; i<max; i++){
				letra = nome[i];
				switch (letra){
					case 'a' : printf("%c", letra);
						break;
					case 'e' : printf("%c", letra);
						break;
					case 'i' : printf("%c", letra);
						break;
					case 'o' : printf("%c", letra);
						break;
					case 'u' : printf("%c", letra);
						break;
					}
				}
			}else
				printf("Possui número par de caractere!");
				
		return(0);
		
		}

	

	


