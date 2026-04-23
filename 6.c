#include <stdio.h>
int main(){
	float p;
	printf("Digite o número de pontos do time\n");
	scanf("%f", &p);
	
	if(p >= 20){
		printf("Classificado");
	}else if(p >= 10 && p < 20){
		printf("Em disputa");
	}else if(p < 10){
	    printf("Eliminado");
}
	
}