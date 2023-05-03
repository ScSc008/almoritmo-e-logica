#include <stdio.h>
#include <conio.h>

//17 - Switch - Faça um algoritmo que receba o preço e o código de origem de um produto e exiba a procedência de acordo com a tabela abaixo:
//Código de Origem	Procedência
//1			Sul
//2			Norte
//3			Leste
//4			Oeste
//5 ou 6			Nordeste
//7, 8 ou 9		Sudeste
//10 até 20		Centro-Oeste
//21 até 30		Noroeste
//Outros código		Inválido
void main(){
	int n;
	
	printf("informe o codigo:");
	scanf("%d", &n);
	
	switch(n){
		case 1:
			printf("procedencia: sul");
			break;
		case 2:
			printf("procedencia: norte");
			break;
		case 3:
			printf("procedencia: leste");
			break;
		case 4:
			printf("procedencia: oeste");
			break;
		case 5 ... 6:
			printf("procedencia: nordeste");
			break;
		case 7 ... 9:
			printf("procedencia: sudeste");
			break;
		case 10 ... 20:
			printf("procedencia: centro-oeste");
			break;
		case 21 ... 30:
			printf("procedencia: noroeste");
			break;
		default:
			printf("procedencia: invalido");
			break;
	 }
}
