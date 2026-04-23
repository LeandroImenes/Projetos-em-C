#include <stdio.h>
#include <windows.h>
int main(){
	SetConsoleOutputCP(65001);
	float n, m, i, iq, in, an;
	printf("Quantas notas o aluno tem?\n");
	scanf("%f", &n);
	m = 0;
	i = 1;
	in = n;
	do{
		printf("Digite a nota i\n");
		scanf("%f", &i);
		iq++;
		an = an + i;
    }while (iq != in);
    m = an / n;
    
	if (m >= 7){
		printf("Aprovado", m);
	}else if (m < 6.9 && m >= 5){
		printf("Recuperação", m);
	}else{
		printf("Reprovado", m);
	}
}