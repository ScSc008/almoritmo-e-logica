#include <stdio.h>
#include <conio.h>

//16 - Switch - Faça um algoritmo que leia um número de 0 até 10 e o exiba por extenso, 
//caso o número seja diferente do intervalo, exibir uma mensagem de erro.


void main(){
	int n;
	
	printf("informe n:");
	scanf("%i", &n);
	
	switch(n){
		case 0:
			printf("\n zero");
			break;
		case 1:
			printf("\n um");
			break;
		case 2:
			printf("\n dois");
			break;
		case 3:
			printf("\n tres");
			break;
		case 4:
			printf("\n quatro");
			break;
		case 5:
			printf("\n cinco");
			break;
		case 6:
			printf("\n seis");
			break;
		case 7:
			printf("\n sete");
			break;
		case 8:
			printf("\n oito");
			break;
		case 9:
			printf("\n nove");
			break;
		case 10:
			printf("\n dez");
			break;
		default:
			printf("\n invalido");
	}
}
