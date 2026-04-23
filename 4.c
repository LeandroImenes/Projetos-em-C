#include <stdio.h>

int main(){
	int a, b;
	printf("Digite um numero inteiro\n");
	scanf("%d", &a);
	printf("Digite outro numero inteiro\n");
	scanf("%d", &b);
	
	if(a>b){
		printf("O maior numero entre eles e %d", a);}
	else if(a<b){
		printf("O maior numero entre eles e %d", b);}
	else{
	printf("Os numeros sao iguais");}
		
	getch();
	return 0;
}