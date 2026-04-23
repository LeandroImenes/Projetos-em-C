#include <stdio.h>

int main(){
	float s, sf;
	printf("Digite o valor do seu salario\n");
	scanf("%f", &s);
	
	if(s>1800){
		sf = s * 1.10;}
	else{
		sf = s * 1.15;}
	
	printf("Seu novo salario e de R$%.02f", sf);
	
	getch();
	return 0;

}