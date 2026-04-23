#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(65001);
	for(int i = 1; i <= 10;i++)
	    printf("%d° colocado(a)\n", i);			    
	getch();
}