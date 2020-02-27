#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "");
	int tab;
	int elemento;
	int repete;
	repete = 1;
	
	while(repete==1){	
		printf("Qual tabuada deseja saber ? ");
		scanf("%d", &tab);
		
		elemento = 1;
		while(elemento <= 10){
			printf("%d x %d \n", tab, elemento, elemento*tab);
			elemento = elemento + 1;
		}
		
		printf("Deseja continuar (1-sim, 2-não)");
		scanf("%d", &repete);
	}
}

