/*Calicular e apresentar o valor do volume de uma lata de óleo, utilizando a förmula V = 3.14159 * R * R * A, 
em que as variáveis V, R e A representam, respectivamente, o volume, o raio e a altura.*/

#include <stdio.h>
int main ()
{
	float V, R, A;	//	VOLUME, RAIO E ALTURA	
	printf("\n\tDigite o valor do Raio: \n\t");
	scanf("%f", &R);
	printf("\n\tDigite o valor da Altura: \n\t");
	scanf("%f", &A);
	V = (3.14159 * R * R * A);
	printf("\n\tO volume da lata de oleo e: \n\t\t%.2f\n\n", V);
	
	system("pause");
	
	return 0;
}
