#include <stdio.h>
int main(){
	char nome [20];
	float p, a, am, i;
	printf("Digite seu nome\n");
	scanf("%s", &nome);
	printf("Digite seu peso em Kg\n");
	scanf("%f", &p);
	printf("Digite sua altura em cm\n");
	scanf("%f", &am);
	a = am / 100;
	i = p / (a * a);
	
	if (i < 18.6){
		printf("%.2f, Abaixo do peso", i);
	}else if (i >= 18.6 && i <= 24.9){
		printf("%.2f, Peso normal", i);
	}else if (i >= 25 && i <= 29.9){
		printf("%.2f, Sobrepeso", i);
	}else if (i >= 30 && i <= 34.9){
		printf("%.2f, Obesidade grau I", i);
	}else if (i >= 35 && i <= 39.9){
		printf("%.2f, Obesidade grau II", i);
	}else{
		printf("%.2f, Obesidade grau III", i);
	}
	getch();
}