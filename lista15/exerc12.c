#include <stdio.h>
#include <conio.h>

//12 - S�o informados dois valores num�ricos correspondentes as notas de um determinado aluno. 
//Deseja-se um algoritmo que permita responder "aprovado" se o aluno obtiver m�dia aritm�tica simples igual ou superior a 7,0 caso contr�rio "Reprovado".
// Mostre tamb�m a m�dia de aprova��o do aluno.

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
