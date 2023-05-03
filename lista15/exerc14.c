#include <stdio.h>
#include <conio.h>

//14 - Elabore um algoritmo que informe o maior numero entre três números conhecido pelo usuário. (Considere número iguais).

void main(){
	int n1, n2, n3;
	
	printf("informe n1:");
	scanf("%i", &n1);
	printf("informe n2:");
	scanf("%i", &n2);
	printf("informe n3:");
	scanf("%i", &n3);
	
	if(n1 > n2 && n1 > n3){ 
		printf("\n n1 eh o maior numero");
	}
	else{
		if(n2 > n1 && n2 > n3){
			printf("\n n2 eh o maior numero");
		}
		else{
			if(n3 > n1 && n3 > n2){
				printf("\n n3 é o maior numero");
			}
		}
	}
	if(n1 == n2 && n2 == n3){
		printf("\n possuem o mesmo valor");
	}
}
