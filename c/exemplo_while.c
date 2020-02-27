#include <stdio.h>
#include <locale.h>

void main(){
	
	int x;
	x=0;
	
	printf("Informe o valor de X ");
	scanf("%d", &x);
	
	while (x <= 10){
		printf("Elemento Invalído \n");
		printf("Informe o valor de X");
		scanf("%d", &x);
	}
	
	
	
}
