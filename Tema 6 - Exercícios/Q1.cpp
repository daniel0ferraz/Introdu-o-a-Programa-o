#include<stdio.h>

/*
Tema 6 - Exerc�cios 1
1- Fa�a um programa que leia cinco temperaturas em graus Celsius 
e apresente-as convertidas em graus Fahrenheit.A f�rmula de convers�o
 �: F = (9 * C + 160) / 5, na qual F � a temperatura em Fahrenheit e C � a temperatura em Celsius.
*/
int main()
{
	float F,C;
	int cont;
	for(cont=1;cont<=5;cont++){
	printf("Informe a temperatura atual: ");
	scanf("%f",&C);
	printf("Temperatura atual: \n%.2f",C);
	
	F=(9 * C + 160)/5;
	printf("\nConvertida em Fahrenheit: \n%.2f",F);	
}	
}
