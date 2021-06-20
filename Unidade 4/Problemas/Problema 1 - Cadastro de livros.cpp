#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 20

struct livro
{	
	int codigo, ano;
	char titulo[50], autor[30], area[30], editora[30];
};



int main(){
setlocale(LC_ALL, "Portuguese");	

	struct livro ficha[TAM];
	struct livro troca;
	int busca, i, j, acha, op;
	
	op=0;
	while (op != 5)
	{
		printf("\n1 - Cadastrar os livros\n");
		printf("2 - Imprimir os livros cadastrados\n");
		printf("3 - Pesquisar livros por códigos\n");
		printf("4 - Ordenar os livros por ano\n");
		printf("5 - Sair\n");
		printf("\nDigite a opção desejada: ");
		scanf("%d", &op);
		fflush(stdin);
			
			if(op == 1)
			{
				system("cls");
				for(i=0; i<TAM; i++){
					printf("Digite o código do livro %d:", i+1);
					scanf("%d", &ficha[i].codigo);
					fflush(stdin);
					printf("Digite o titulo do livro: ");
					scanf("%50[^\n]s", &ficha[i].titulo);
					fflush(stdin);
					printf("Digite o autor: ");
					scanf("%30[^\n]s", &ficha[i].autor);
					fflush(stdin);
					printf("Digite a área do livro: ");
					scanf("%30[^\n]s", &ficha[i].area);
					fflush(stdin);
					printf("Digite o ano: ");
					scanf("%d",&ficha[i].ano);
					fflush(stdin);
					printf("Digite o nome da autora: ");
					scanf("%30[^\n]s", &ficha[i].editora);
					fflush(stdin);		
				}
			}
			else{
				if (op == 2)
				{
					system("cls");
					for(i=0; i<TAM; i++)
					{
						printf("\nCódigo: %d\n", ficha[i].codigo);
						printf("Título: %s\n", ficha[i].titulo);
						printf("Autor: %s\n", ficha[i].autor);
						printf("Área: %s\n", ficha[i].area);
						printf("Ano: %d\n", ficha[i].ano);
						printf("Editora: %s\n", ficha[i].editora); 
						
					}
				}
				else{
					if(op == 3){
						system("cls");
						printf("Digite o código que deseja buscar: ");
						scanf("%d", &busca);
						i=0;
						acha=0;
						
						while((i < TAM) && (acha == 0))
						{
							if (ficha[i].codigo == busca)
								acha= 1;
							else
								i++;
						} 
						if (acha == 1)
						{
							printf("\nCódigo: %d\n", ficha[i].codigo);
							printf("Título: %s\n", ficha[i].titulo);
							printf("Autor: %s\n", ficha[i].autor);
							printf("Área: %s\n", ficha[i].area);
							printf("Ano: %d\n", ficha[i].ano);
							printf("Editora: %s\n", ficha[i].editora);
						}
						else
							printf("\n Registro não encontrado");
						}
						
						else
						{
							if(op == 4)
							{
								system("cls");
								for (i=0; i<TAM-1; i++)
								{
									for(j=i+1; j<TAM; j++){
										
										if(ficha[i].ano > ficha[i].ano)
										{
											troca = ficha[i];
											ficha[i] = ficha[j];
											ficha[j] = troca;
										}
									}
								}
								
								for(i=0; i<TAM; i++)
								{
									printf("\n Código: %d, Título: %s, Ano: %d\n", ficha[i].codigo, ficha[i].titulo, ficha[i].ano);
									
								}
							}
						}
					}
				}
		}
	return(0);


}
