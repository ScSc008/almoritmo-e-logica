#include <stdio.h>
#include <conio.h>

//17 - Switch - Fa�a um algoritmo que receba o pre�o e o c�digo de origem de um produto e exiba a proced�ncia de acordo com a tabela abaixo:
//C�digo de Origem	Proced�ncia
//1			Sul
//2			Norte
//3			Leste
//4			Oeste
//5 ou 6			Nordeste
//7, 8 ou 9		Sudeste
//10 at� 20		Centro-Oeste
//21 at� 30		Noroeste
//Outros c�digo		Inv�lido
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
