#include <stdio.h>
#include <conio.h>

//9 - Faça um algoritmo que leia a idade de uma pessoa e ao final exiba quando meses, dias, horas, minutos e segundo que essa pessoa já viveu.

void main(){
	int i, m, d, h, min, s;
	
	printf("informe sua idade:");
	scanf("%i", &i);
	
	m = i * 12;
	d = m * 31;
	h = d * 24;
	min = h * 60;
	s = min * 60;
	
	printf("\n meses de vida: %i", m);
	printf("\n dias de vida: %i", d);
	printf("\n horas de vida: %i", h);
	printf("\n minutos de vida: %i", min);
	printf("\n segundos de vida: %i", s);		
}
