#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define tam 30

	struct agenda{
		char nome[50];
		char email[80];
		int telefone;
	};

		
int main(){
setlocale(LC_ALL, "Portuguese");

	struct agenda cadastro[tam];
	
	int i, op;
	
	
	while(op != 3){
		
		printf("\n----- AGENDA -----\n");
		printf("1 - Cadastrar contatos\n");
		printf("2 - Imprimir contatos\n");
		printf("3 - Sair\n");
		printf("\nO que você deseja fazer: ");
		scanf("%d", &op);
		
		if(op == 1){
			for(i=0; i<tam; i++){
				system("cls");
				fflush(stdin);
				printf("\n----- CADASTRO %d -----\n", i+1);
				printf("Nome: ");
				scanf("%50[^\n]s", &cadastro[i].nome);
				fflush(stdin);
				printf("Telefone: ");
				scanf("%d", &cadastro[i].telefone);
				fflush(stdin);
				printf("Email: ");
				scanf("%80[^\n]s", &cadastro[i].email);
				fflush(stdin);
			}
		}else
		{
			if(op == 2){
				system("cls");
				for(i=0; i<tam; i++){
					printf("\nNome: %s\n", cadastro[i].nome);
					printf("Telefone: %d\n", cadastro[i].telefone);
					printf("Email: %s\n", cadastro[i].email);
				}
			}
		}
	}
	return(0);
}
