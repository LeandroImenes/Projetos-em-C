# Projetos em C
## Exemplos

### Código 67
```c
#include <stdio.h>
int main(){
	float a, b;
	printf("Digite um numero aleatorio\n");
	scanf("%f", &a);
	b = 0;
	if (a >= b){
		printf("Nah, it's 67");
	}else{
		printf("Nah, it's 67");
	}
}
```

### Código IMC
```c
#include <stdio.h>
int main(){
	char nome [20];
	float p, a, am, i;
	printf("Digite seu nome\n");
	scanf("%s", &nome);
	printf("Digite seu peso em Kg\n");
	scanf("%f", &p);
	printf("Digite sua altura em cm\n");
	scanf("%f", &am);
	a = am / 100;
	i = p / (a * a);
	
	if (i < 18.6){
		printf("%.2f, Abaixo do peso", i);
	}else if (i >= 18.6 && i <= 24.9){
		printf("%.2f, Peso normal", i);
	}else if (i >= 25 && i <= 29.9){
		printf("%.2f, Sobrepeso", i);
	}else if (i >= 30 && i <= 34.9){
		printf("%.2f, Obesidade grau I", i);
	}else if (i >= 35 && i <= 39.9){
		printf("%.2f, Obesidade grau II", i);
	}else{
		printf("%.2f, Obesidade grau III", i);
	}
	getch();
}
```

### Código Notas de alunos
```c
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
```
