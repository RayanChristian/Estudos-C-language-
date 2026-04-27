#include <stdio.h>
#include <math.h>

int main(void){
	float A, B, C;
	float DT, R1, R2;
	
	printf ("\nInforme o valor de A: \n"); 
	scanf("%f", &A);
	if (A == 0){
	printf ("\nA equacao nao e do segundo grau\n");
}
	else{
	printf ("\nInforme o valor de B: \n"); 
	scanf("%f", &B);
	printf ("\nInforme o valor de C: \n"); 
	scanf("%f", &C);
	
		DT = ((B*B) + (-4 * A * C));
		R1 = (((-B)+(sqrt(DT)))/(2*A));
		R2 = (((-B)-(sqrt(DT)))/(2*A));
		
		printf("\nO valor de delta e: %.2f\n",DT);
	
	if (DT > 0){
	printf ("\nAs raizes da equacao sao: \n x1 = %.2f, x2 = %.2f\n", R1, R2);
}
	else if (DT == 0){
	printf ("\nA raiz da equacao e:\n x = %.2f\n", R1);
}
	else if(DT < 0){
	printf("\nA equacao nao possui raizes reais\n");
}	
	return 0;

	system("pause");
}
}