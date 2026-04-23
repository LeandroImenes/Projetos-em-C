#include <stdio.h>

int main(){
	float n1, n2, nf;
	printf("Digite o valor da sua primeira nota\n");
	scanf("%f", &n1);
	printf("Digite o valor da sua segunda nota\n");
	scanf("%f", &n2);
	nf = (n1 + n2) / 2;
	if(nf>=7){
		printf("Aprovado");}
		else{
			printf("Reprovado");
		}
	getch();
	return 0;	
}