#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int  i;

	for (i=1; i <= 30; i++){
		if(i % 3 == 0) 
			printf("Este n�mero � divisivel por 3: %d\n", i);
		
		
		if (i % 7 == 0)
			printf("Este n�mero � divisivel por 7: %d\n", i);
		
	}

}

