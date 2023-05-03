#include <stdio.h>
#include <conio.h>

//5 - Escreva um algoritmo que leia 4 números, após a leitura 

void main(){
	
	int n1, n2, n3, n4, mult;
	
	printf("informe n1:");
	scanf("%i", &n1);
	printf("informe n2:");
	scanf("%i", &n2);
	printf("informe n3:");
	scanf("%i", &n3);
	printf("informe n4:");
	scanf("%i", &n4);

	mult = n1 * n2 * n3 * n4;
	
	printf("resultado: %i", mult);	
}
