#include <stdio.h>
int main(){
	float p, e, pre;
	printf("Digite, em Kg, o peso dos peixes\n");
	scanf("%f", &p);
	e = (p - 50) * 4;
	
	if (p < 50){
		printf("Nao pagara nada");
	}else if (p >= 50){
		printf("Tera que pagar %.2f", e);
	}
	getch();
}