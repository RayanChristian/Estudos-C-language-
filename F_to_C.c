#include <stdio.h>
int main(void)
{
	float C, F;
	printf("\n\tDigite o valor da temperatura em Fahrenheit \n\t(somente numeros): \n\t\t");
	scanf("%f", &F);
	C = (((F - 32)* 5) / 9);
	printf("\n\tO valor em Celsius e: %.2f\n\n", C);
	
	system("pause");
	
	return 0;
}