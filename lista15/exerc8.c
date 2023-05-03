#include <stdio.h>
#include <conio.h>

//8 - Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.

void main(){
	
	int n1, n2, n3;
	float m;
	
	printf("informe a primeira nota:");
	scanf("%i", &n1);
	printf("informe a segunda nota:");
	scanf("%i", &n2);
	printf("informe a terceira nota:");
	scanf("%i", &n3);
	
	m = (float)(n1 + n2 + n3) / (float)3;
	
	printf("media final: %0.2f", m);
}
