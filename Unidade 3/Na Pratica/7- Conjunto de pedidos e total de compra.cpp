#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int num, dia, mes, ano, quantidade;
	float preco, total, total2;
	
	quantidade = 0;
	preco = 0;
	
	printf("N�mero do pedido: ");
	scanf("%d", &num);
	
	while(num != 0)	{
		printf("Digite o dia do pedido: ");
		scanf("%d", &dia);
		printf("Digite o m�s do pedido: ");
		scanf("%d", &mes);
		printf("Digite o ano do pedido: ");
		scanf("%d", &ano);
		
		printf("Pre�o Unit�rio: ");
		scanf("%f", &preco);
		
		printf("Quantidade: ");
		scanf("%d", &quantidade);
		
		total = total + (preco * quantidade);
		//total2 = total2 + total;
		
		printf("N�mero do pedido: ");
		scanf("%d", &num);
	
	}
	
	printf("\nTotal da compra: %.2f\n", total);

	return(0);


}
