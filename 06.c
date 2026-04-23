#include <stdio.h>
#include <windows.h>
#include <math.h>
void main(){
	SetConsoleOutputCP(65001);
	int area, galoes, latas;
	int areagalao = 21, arealata = 108;
	int diflatas, difgaloes
	float precogaloes, precolatas;
	//1 litro pinta 6 m quadrados
	printf("Quantos metros quadrados serão pintados?\n");
	scanf("%d", &area);
	if(area < (litrogalao * 6)){
		printf("Voce precisa de 1 galao R$ %.2f", galao);
	}else if (area < (litrogalao * 6 * 5)){
		galoes = area /(litrogalao * 6);
		preco = galoes * galao;
		printf("Voce precisa de %d galao R$ %.2f", galoes, preco);
	}
}
