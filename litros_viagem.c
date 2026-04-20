/*
Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12 Km por litro. 
Para obter o cálculo, o usuário deve fornecer o tempo gasto na viagem e a velocidade média. Desta forma, será possível obter a distância percorrida 
com a fórmula DISTANCIA = TEMPO VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com 
a fórmula LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os valores da velocidade média, tempo gasto, a distância percorrida e
a quantidade de litros utilizada na viagem. Sugestão: trabalhe com valores reais.
*/

#include <stdio.h>
int main(void)
{
float KMPL;	//	QUILÔMETROS POR LITRO
float T;	//	TEMPO DE VIAGEM (EM MINUTOS)
float VM;	//	VELOCIDADE MÉDIA
float D;	//	DISTÂNCIA
float LU;	//	LITROS UTILIZADOS

KMPL = 12;

printf("\n\t\t[RESPONDA SOMENTE COM NUMEROS]");
printf("\n\tInforme o tempo da viagem (em minutos):\n\t");
scanf("%f", &T);
printf("\tInforme a velocidade media:\n\t");
scanf("%f", &VM);

D = (T*(VM/60));	//	TRANSFORMANDO KM/H EM KM/MIN 
LU = (D/KMPL);

printf("\t----------------------------------------------\n");
printf("\n\t\t[INFORMACOES OBTIDAS]\n\n");
printf("\tVelocidade Media: %.1f km/hora\n", VM);
printf("\tTempo gasto: %.0f minutos\n\n", T);
printf("\t----------------------------------------------\n");
printf("\t\t[INFORMACOES CALCULADAS]\n\n");
printf("\tDistancia percorrida: %.2f km\n", D);
printf("\tLitros utilizados: %.2f L\n\n", LU);

system("pause");

	return 0;
}