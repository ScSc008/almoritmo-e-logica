#include <stdio.h>
#include <conio.h>

//10 - Elabore um algoritmo que informe o maior número entre dois números conhecido pelo usuário

void main(){
	int n1, n2;
	
	printf("informe n1:");
	scanf("%i", &n1);
	printf("informe n2:");
	scanf("%i", &n2);
	
	if(n1 > n2){ 
		printf("\n n1 eh maior que n2");
	}
	else{
		printf("\n n2 eh maior que n1");
	}
}

