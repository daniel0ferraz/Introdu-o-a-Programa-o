#include<stdio.h>
int main()
    /*Fa�a um programa que leia 20 n�meros positivos e calcule a quantidade
	 de n�meros pares e �mpares, a m�dia de valores pares e a m�dia geral dos 
	 n�meros lidos. */
{
	int num,par=0,impar=0;
	
	printf("Digite 20 n�mero (zero) para sair.\n");
	scanf("%d",&num);
	while(num!=0){
		printf("Digite 20 n�meros (zero) para sair.\n");
		scanf("%d",&num);
		
		if(num%2==0){
			par++;
		} else{
			impar++;
		}
	}
	printf("\n Numeros Pares: %d",par);
	printf("\n Numeros Impares: %d",impar);
}
