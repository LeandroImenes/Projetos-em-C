#include <stdio.h>
int main(){
	float n;
	printf("Digite um numero\n");
	scanf("%f", &n);
	
	if(n > 100){
		printf("O numero e maior que 100");
	}else if(n <= 100){
		printf("O numero e menor ou igual a 100");
	}
}