#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	int num;
	
	printf("Informe seu nome: ");
	scanf("%s", nome);
	
	printf("Informe sua idade: ");
	scanf("%d", &num);
	
	
	
		if(num <= 18){
			printf("\nA mensalidade do seu plano de saúde é R$ 50.00\n");
		}
			else
			{ 
			if ((num >= 19) && (num <= 29))
			{printf("\nA mensalidade do seu plano de saúde é R$ 70.00\n");
		 	}
				else
				{
				if((num >= 30) && (num <= 45))
				{printf("\nA mensalidade do seu plano de saúde é R$ 90.00\n");
		    	}
					else
					{ 
					if((num >= 46) && (num <= 65))
					{printf("\nA mensalidade do seu plano de saúde é R$ 130.00\n");
		             } 
		   				else
						 {
						if(num > 65)
						{printf("\nA mensalidade do seu plano de saúde é R$ 170.00\n");
		    			} 
		    		}
	        	}
	   		}
	   }
		    			
		    			
	return(0);
}

