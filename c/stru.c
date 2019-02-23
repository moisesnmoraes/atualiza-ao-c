#include <stdio.h>

typedef struct{
	int n1;
	int n2;
	
}MinhaEstrutura;

void main(){
	int y;
	MinhaEstrutura vX[10];
	 
	vX[0].n1 = 4;
	vX[0].n2 = 5;
	
	vX[1].n1 = 6;
	vX[1].n2 = 7;	
	
//	printf("valor %d", vX[0].n1);
	for(y=0;y<=2;y++){
		printf("informe o valor  n1 para o vetor posicao %d\n",y);
		scanf("%f",&vX[y].n1);
		printf("informe o valor n2 para o vetor posicao %d\n",y);
		scanf("%f",&vX[y].n2);
		
		
	}
	for(y=0;y<=2;y++){
		
	printf("valores informados  %d\n",vX[y].n1);
}
}
