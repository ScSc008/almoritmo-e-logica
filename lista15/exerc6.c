#include <stdio.h>
#include <conio.h>

//6 - Escreva um algoritmo que leia 3 números e ao final subtraia o primeiro do segundo e divida o resultado pelo terceiro.

void main(){
	int n1, n2, n3, sub;
	float div;
	
	printf("informe n1:");
	scanf("%i", &n1);
	printf("informe n2:");
	scanf("%i", &n2);
	printf("informe n3:");
	scanf("%i", &n3);
	
	sub = n1 - n2;
	div = sub / n3;
	
	printf("resultado: %f", div );
}
