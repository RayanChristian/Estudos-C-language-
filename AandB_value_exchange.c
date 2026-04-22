#include <stdio.h>
int main(){
	int A,B,AUX;
	A = 1;
	B = 2;
	AUX = A;
	A = B;
	B = AUX;
	
	printf("O valor de A trocado e: %d\nO valor de B e: %d",A,B);
	
	system("pause");
	
	return 0;
}