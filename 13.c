#include <stdio.h>
int main(){
	float n1, n2, n3;
	printf("Digite suas notas\n");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	if((n1 + n2 + n3) / 3 >= 7){
		printf("Aprovado");
	}else if((n1 + n2 + n3) / 3 >= 5 && (n1 + n2 + n3) / 3 < 7){
		printf("Recuperacao");
	}else{
		printf("Reprovado");
	}
}