/*
Ler quatro valores numéricos inteiros e apresentar o resultado dois a dois da 
adição e multiplicação entre os valores lidos, baseado-se na utilização do conceito de 
propriedade distributiva. Sugestão: se forem lidas as variá-veis A, B, C e D, devem ser 
somados e multiplicados os valores de A com B. A com C e A com D; depois B com C, 
B com D e por último C com D. Note que para cada operação são utilizadas seis 
combinações. Assim sendo, devem ser realizadas doze operações de processamento, sendo 
seis para as adições e seis para as multiplicações.
*/

#include <stdio.h>
int main(void)
{
	int A, B, C, D;
	int SOMA_AB, SOMA_AC, SOMA_AD, SOMA_BC, SOMA_BD, SOMA_CD;
	int MULTI_AB, MULTI_AC, MULTI_AD, MULTI_BC, MULTI_BD, MULTI_CD;
	printf("\tDigite o valor de A\n\t");
	scanf("%d", &A);
	printf("\tDigite o valor de B\n\t");
	scanf("%d", &B);
	printf("\tDigite o valor de C\n\t");
	scanf("%d", &C);
	printf("\tDigite o valor de D\n\t");
	scanf("%d", &D);

	SOMA_AB = A+B;
	SOMA_AC = A+C;
	SOMA_AD = A+D;
	SOMA_BC = B+C;
	SOMA_BD = B+D;
	SOMA_CD = C+D;
	MULTI_AB = A*B;
	MULTI_AC = A*C;
	MULTI_AD = A*D;
	MULTI_BC = B*C;
	MULTI_BD = B*D;
	MULTI_CD = C*D;

    printf("\n\t//////////////////////////////////////////////");
	printf("\n\t\tA + B = %d | A x B = %d\n", SOMA_AB, MULTI_AB);
	printf("\t|--------------------------------------------|");
	printf("\n\t\tA + C = %d | A x C = %d\n", SOMA_AC, MULTI_AC);
	printf("\t|--------------------------------------------|");
	printf("\n\t\tA + D = %d | A x D = %d\n", SOMA_AD, MULTI_AD);
	printf("\t|--------------------------------------------|");
    printf("\n\t\tB + C = %d | B x C = %d\n", SOMA_BC, MULTI_BC);
    printf("\t|--------------------------------------------|");
    printf("\n\t\tB + D = %d | B x D = %d\n", SOMA_BD, MULTI_BD);
    printf("\t|--------------------------------------------|");
    printf("\n\t\tC + D = %d | C x D = %d\n", SOMA_CD, MULTI_CD);
    printf("\t|--------------------------------------------|");
    
	return 0;

}
