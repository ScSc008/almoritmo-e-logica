#include <stdio.h>
#include <conio.h>

//4 - Escreva um algoritmo que leia 2 números, após a leitura somar e exibir o resultado//

void main (){
	
	int n1, n2, soma;
	
	printf("informe n1: ");
	scanf("%i", &n1);
	printf("informe n2: ");
	scanf("%i", &n2);
	
	soma = n1 + n2;
	
	printf("resultado: %i", soma);
}
