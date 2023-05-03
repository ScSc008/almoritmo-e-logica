#include <stdio.h>
#include <conio.h>

//12 - São informados dois valores numéricos correspondentes as notas de um determinado aluno. 
//Deseja-se um algoritmo que permita responder "aprovado" se o aluno obtiver média aritmética simples igual ou superior a 7,0 caso contrário "Reprovado".
// Mostre também a média de aprovação do aluno.

void main(){
	int n1, n2;
	float m;
	
	printf("informe n1:");
	scanf("%i", &n1);
	printf("informe n2:");
	scanf("%i", &n2);
	
	m = (float)(n1 + n2)/2;
	
	if(m >= 7){
		printf("\n aprovado!");
	}
	else{
		printf("\n reprovado!");
	}
}
