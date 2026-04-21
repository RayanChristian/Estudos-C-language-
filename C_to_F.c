#include <stdio.h>
int main(void)
{
	float C, F;
	printf("\n\tDigite o valor da temperatura em Celsius: \n\t");
	scanf("%f", &C);
	F = ((9 * C + 160)/5);
	printf("O valor em fahrenheit e: %.2f", F);
	
	system("pause");
	
	return 0;
}