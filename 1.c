#include <stdio.h>

int main(){
	int a;
	printf("Digite um numero inteiro\n");
	scanf("%d", &a);
	
	if(a>0){
		printf("Numero positivo");}
		else if (a<0){
		printf("Numero negativo");}
		else{
		printf ("Numero igual a zero");}
			
	getch();
	return 0;
}