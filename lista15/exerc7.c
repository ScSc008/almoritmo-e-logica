#include <stdio.h>
#include <conio.h>

//7 - Escreva um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, ao final exiba a idade que essa pessoa tem.

void main(){
	int an, aa, i;
	
	printf("informe o ano do seu nascimento:");
	scanf("%i", &an);
	printf("informe o ano atual:");
	scanf("%i", &aa);
	
	i = aa - an;
	
	printf("idade: %i", i);
}
