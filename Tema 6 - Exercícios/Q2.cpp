#include<stdio.h>
int main(){
	
	/*
	 Fa�a um programa que leia dois valores para as vari�veis A e B 
	 e efetue a troca dos valores de forma que a vari�vel A passe a 
	 possuir o valor da vari�vel B e a vari�vel B passe a possuir o
	 valor da vari�vel A. Apresente os valores trocados. O programa 
	 dever� permitir a troca dos n�meros cinco vezes. 
	*/
	
	int A,B,i,rec;
	
	for(i=1;i<=5;i++)
	{
		printf("\n Informe um valor para A: "); scanf("%d",&A);
	    printf("\n Informe um valor para B: "); scanf("%d",&B);
	    
	    rec=A;
	    A=B;
	    B=rec;
	    printf("\n Valor de A: %d",A);
	    printf("\n Valor de B: %d",B);
	    
	    
		
		
	}
}
