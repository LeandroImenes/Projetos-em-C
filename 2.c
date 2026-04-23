#include <stdio.h>

int main(){
	int idade, ano ;
	printf("Digite seu ano de nascimento\n");
	scanf("%d", &ano);
	
	idade=2026-ano;
	
	if(idade<18){
		printf("Menor de idade");}
		else{
		printf("Maior de idade");}
	getch();
	return 0;
}