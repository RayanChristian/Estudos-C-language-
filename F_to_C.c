/*Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula de conversão de 
temperatura a ser utilizada é C=((F-32)5)/9, em que a variável Fé a temperatura em graus Fahrenheit e a variável 
C é a temperatura em graus Celsius.*/

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
