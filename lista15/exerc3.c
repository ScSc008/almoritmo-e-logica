#include <stdio.h>
#include <conio.h>

void main(){
	//3 - Escreva um algoritmo que leia seu nome e em uma segunda variável leia seu sobrenome e ao final exiba seu nome concatenado com seu sobrenome
	char nome[15];
	char sn[50]; 
	
	printf("informe nome:");
	scanf("%s", nome);
	printf("informe sobrenome:");
	scanf("%s", sn);
	printf("nome completo: %s %s", nome, sn);
}
