#include <stdio.h>
int main(){
	char TU, M, T, N [20];
	printf("Digite seu turno: M manha, T tarde e N noite\n");
	scanf("%s", &TU, &M, &T, &N);
	
	if(TU == 'M'|TU == 'm'){
		printf("Bom dia");
	}else if(TU == 'T'| TU == 't'){
		printf("Boa tarde");
	}else if(TU == 'N'| TU == 'n'){
		printf("Boa noite");
	}else{
		printf("Turno invalido");
	}
}