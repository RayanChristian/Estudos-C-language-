/* Ler dois valores inteiros para as variáveis A e B, efetuar a troca dos valores de modo que 
a variável A passe a possuir o valor da variável B, e a variável B passe a possuir o valor da variável A.
Apresentar os valores trocados.*/

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
