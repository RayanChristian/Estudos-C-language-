/* Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão de temperatura 
a ser utilizada é F = (9 C+160)/5, em que a variável F representa a temperatura em graus Fahrenheit e a variável C representa 
a temperatura em graus Celsius*/

#include <stdio.h>
int main(void)
{
	float C, F;
	printf("\n\tDigite o valor da temperatura em Celsius: \n\t\t");
	scanf("%f", &C);
	F = ((9 * C + 160)/5);
	printf("\n\tO valor em fahrenheit e: %.2f\n\n", F);
	
	system("pause");
	
	return 0;
}
