#include<stdio.h>
int main() 
{
	/*
	Exemplo 4: Programa com tratamento de mais do que duas condi��es.
	Considere que ao contexto do programa da m�dia seja acrescentada uma nova condi��o:
	se o aluno tiver m�dia entre 3.0 e 7.0, ele poder� fazer uma prova final.
	Apenas estar� reprovado o aluno que obter uma m�dia abaixo 
	de 3.0. Nesse caso, mais uma condi��o seria necess�ria.
	*/
	
	float nota1, nota2, media;
	
	printf("\nInforme a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("\nInforme a segunda nota: ");
	scanf("%f",&nota2);
	
	media = (nota1 + nota2)/2;
	printf("\n Media: %.1f\n",media);
	
	if(media>=7)
	        printf("\n Aprovado!");
	else{
	    if(media>=3 && media<7)
	     	printf("\n Aluno de Recuperacao");
	 else
	   	    printf("Aluno Reprovado:");
	 }
	}
