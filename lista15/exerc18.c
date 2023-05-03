#include <stdio.h>
#include <conio.h>

//18 - Switch - Faça um algoritmo que receba a idade de uma pessoa e classifique-a seguindo a tabela abaixo:
//Idade	Classificação
//0 a 2 anos	Recém-nascido
//3 a 11 anos	Criança
//12 a 19 anos	Adolescentes
//20 a 55 anos	Adulto
//Acima de 55 anos	Idoso

void main(){
	int n;
	
	printf("informe idade: ");
	scanf("%i", &n);
	
	switch(n){
		case 0 ... 2:
			printf("recem-nascido");
			break;
		case 3 ... 11:
			printf("crianca");
			break;
		case 12 ... 19:
			printf("adolescente");
			break;
		case 20 ... 55:
			printf("adulto");
			break;
		case 56 ... 120:
			printf("idoso");
			break;
		default:
			printf("invalido");
			break;
	}
}
