#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int *pvetor;
	int e;
	printf("INFORME O NRO. ELEMENTO\n");
	scanf("%d",&e);
	
	pvetor = (int *)(malloc(e * sizeof(int)));
	//malloc resersa a quantia de espaço
	//em KBytes na memoria necesssaria para 
	//meu vetor pvetor...
	//baseado no numero de elementos 
	//armazenados na variavel(e).
	
	
	if(pvetor == NULL){
		printf(" erro ao alocar memoria\n");
		
	}else{
		printf("alocacao ok\n");
	}
	printf("informe um valor para  a posicacao [0] pvetor..\n");
	scanf("%d",&pvetor[0]);
	
	printf("informe um valor para a posicacao [1] pvetor..\n");
	scanf("%d",&pvetor[1]);
	printf("informe um valor para a posicacao [2] pvetor..\n");
	scanf("%d",&pvetor[2]);
	printf("informe um valor para a posicacao [4] pvetor..\n");
	scanf("%d",&pvetor[4]);
	
	printf(" pvetor 0 %d\n",pvetor[0]);
	printf(" pvetor 1 %d\n",pvetor[1]);
	printf(" pvetor 2 %d\n",pvetor[2]);
	printf(" pvetor 3 %d\n",pvetor[3]);
	printf(" pvetor 4 %d\n",pvetor[4]);
	
	
	
}
