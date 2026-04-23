#include <stdio.h>
int main(){
	float i;
	printf("Digite sua idade\n");
	scanf("%f", &i);
	
	if(i<12){
		printf("Crianca");
	}else if(i<=17 && i>12){
		printf("Adolescente");
	}else if(i>=18){
		printf("Adulto");
	}
}