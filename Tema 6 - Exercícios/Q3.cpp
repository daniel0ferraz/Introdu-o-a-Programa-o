#include<stdio.h>
int main(){
	      /*
		  Crie um programa que calcula o desconto previdenci�rio de dez funcion�rios. 
		  Dado um sal�rio, o programa deve retornar o valor do desconto proporcional ao
		  mesmo. O c�lculo segue a regra: o desconto � de 11% do valor do sal�rio, entretanto,
		  o valor m�ximo de desconto � 318,20. Sendo assim, ou o programa retorna o valor equivalente a
		  11% sobre o sal�rio ou 318,20. 
		  */
		  int i;
		  float sal,prev;
		  
		  for(i=1;i<=10;i++)
		  {
		  	printf("\n Informe o salario: ");
		  	scanf("%f",&sal);
		  	
		  	prev= sal*11/100;
		  	if(prev>318.20){
		  		prev=318.20;
		  		printf("\n Salario: %.2f",prev);
			  }
		  	
		  }
		  }
