#include<stdio.h>
int main(){
        int num,
        tabuada = 1;// inicializa��o;
        printf("Entre com um numero para a tabuada.\n");
        scanf("%d",&num);
        
        while(tabuada<=10){// vericica��o do la�o se tabuada que � 1 � menor que 20, assim repetindo
        printf("Tabuada do numero: %d x %d = %d\n",num, tabuada,num*tabuada);
        tabuada++;
		}
}
