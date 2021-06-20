#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define max 20
	struct livro{
		char titulo[30], autor[30], editora[30];
		int ano;
	};
		
int main(){
setlocale(LC_ALL, "Portuguese");

	struct livro cadastro[max];
	int i, op;


	
	while(op != 3){
	
		printf("\n1 - Cadastrar Livros\n");
		printf("2 - Imprimir Livros\n");
		printf("3 - Sair\n");
		printf("\nO que deseja fazer: ");
		scanf("%d", &op);
				
	
		if(op == 1){
		
			for(i=0; i<max; i++)
			{
				system("cls");
				fflush(stdin);
				printf("\n----- Livro %d -----\n", i+1);
				printf("Informe o título: ");
				scanf("%30[^\n]s", &cadastro[i].titulo);
				fflush(stdin);
				printf("Informe o autor: ");
				scanf("%30[^\n]s", &cadastro[i].autor);
				fflush(stdin);
				printf("Informe a editora: ");
				scanf("%30[^\n]s", &cadastro[i].editora);
				fflush(stdin);
				printf("Informe o ano: ");
				scanf("%d", &cadastro[i].ano);
				fflush(stdin);
				}
			} else{
					if(op == 2)
					{		system("cls");
							for(i=0; i<max; i++){
							printf("\nTítulo: %s\n", cadastro[i].titulo);
							printf("Autor: %s\n", cadastro[i].autor);
							printf("Editora: %s\n", cadastro[i].editora);
							printf("Ano: %d\n", cadastro[i].ano);
						}
					}		
				}
		}
	}






