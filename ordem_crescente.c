#include <stdio.h>

int main(void)

{
	int A, B, C, AUX;
	
	printf("\nDigite o valor de A: "); scanf("%d", &A);
	printf("\nDigite o valor de B: "); scanf("%d", &B);
	printf("\nDigite o valor de C: "); scanf("%d", &C);
	
	if (B < A){
	AUX = A;
	A = B;
	B = AUX;
}
	
	if (C < B && C < A){
	AUX = A;
	A = C;
	C = AUX;
}
	
	if (C < B){
	AUX = B;
	B = C;
	C = AUX;
}
	
	if (C < A){
	AUX = A;
	A = C;
	C = AUX;
}
	
	printf("Os valores em ordem crescente sao: %d, %d, %d\n\n", A, B, C);
	
	system("pause");
	
	return 0;
	
}
