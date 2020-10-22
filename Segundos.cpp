#include <stdio.h>
int main()
{	
	int dias;
	float resultado;
		
		printf("Introduce el numero de dias para calcular el numero de segundos que tiene \n");
	
		scanf("%d", &dias);
			 
			resultado = dias * (24 * 60 * 60);	
	
		printf("En %d dias hay %f segundos \n", dias, resultado);
		
	return 0;
}
