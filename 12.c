#include <stdio.h>
int main(){
	float an, at;
	printf("Digite o ano atual\n");
	scanf("%f", &at);
	printf("Digite o ano do seu nascimento\n");
	scanf("%f", &an);
	
	if(at - an >= 16){
		printf("Pode votar");
	}else{
		printf("Nao pode votar");
	}
}