#include <stdio.h>
#include <windows.h>
int main (){
	SetConsoleOutputCP(65001);
	char r;
	float p, d, pt, q;
	float pf;
	r == 's';
	pf = 0;
	do {
	printf("Digite o preco do produto\n");
	scanf("%f", &p);
	printf("Digite a quantidade\n");
	scanf("%f", &q);
	pt =  p * q;
	pf += pt;
	printf("Mais algum produto? s/n\n");
    scanf(" %c", &r); 
    } while (r == 's');
    printf("%g", pf);
	getch();
	return 0;
}