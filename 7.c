#include <stdio.h>
int main(){
    float a, b, c;
    printf("Digite um numero\n");
    scanf("%f", &a);
    printf("Digite outro numero\n");
    scanf("%f", &b);
    printf("Digite um ultimo numero\n");
    scanf("%f", &c);
    
    if(a > b && a > c){
    	printf("O maior numero e %.0f", a);
	}else if(b > a && b > c){
		printf("O maior numero e %.0f", b);
	}else(c > a && c > b);{
		printf("O maior numero e %.0f", c);
	}
}