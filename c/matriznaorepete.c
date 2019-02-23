#include <stdio.h>

void main(){
	
	int a[5][2];
	int linha,coluna;
	int rn,numero[10];
	int aux[10][2];
	for(linha=0;linha<=4;linha++){
		
		for(coluna=0;coluna<=1;coluna++){
			printf("informe o valor da linha %d coluna %d \n \t",linha,coluna);
			scanf("%d",&a[linha][coluna],&numero[rn]);
			
		}
		numero[rn]++;
	}
	while(numero[rn]>=1){
		
		for(linha=0;linha<=4;linha++){
			
			for(coluna=0;coluna<=1;coluna++){
			a[linha][coluna]=numero[rn];
		//	a[linha][coluna]++;	
				if(a[linha][coluna]==numero[rn]){
					printf("numero ja informado  \n  ");
					
					numero[rn]++;
				}
					if(a[linha][coluna]!=numero[rn]){
						
						printf("nenhum numero repetido\n");
						numero[rn]--;
					}
			}
			
		}
	
	}
	
	
	
	
}
