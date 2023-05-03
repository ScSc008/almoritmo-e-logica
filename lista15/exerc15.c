#include <stdio.h>
#include <conio.h>

//15 - Elabore um algoritmo que seja capaz de transformar graus Fahrenheit em Celsius utilizando a formula dada:
//	C = ((F - 32) * 5) / 9


void main(){
	float f, c;
	
	printf("informe farenheit: ");
	scanf("%f", &f);
	
	c = ((f - 32)*5)/9;
	
	printf("em celsius: %0.2f", c);
		
}
