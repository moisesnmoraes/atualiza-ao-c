#include <stdio.h>


void main(){
	
	int x[2][2];
	int y[2][2];
	int linha,coluna;
	
	
	for(linha=0;linha<=1;linha++){//preenchendo a matriz
		
		for(coluna=0;coluna<=1;coluna++){
	
			printf("informe o valor da linha MATRIZ X %d coluna %d\n",linha,coluna);
			scanf("%d",&x[linha][coluna]);
		
			printf("informe o valor da linha MATRIZ Y %d coluna %d\n",linha,coluna);
			scanf("%d",&y[linha][coluna]);
		
		
		}
		
		
	}
		for(linha=0;linha<=1;linha++){//trocar as matrizes
		
			for(coluna=0;coluna<=1;coluna++){
				
			y[linha][coluna]=(x[linha][coluna]+y[linha][coluna])-x[linha][coluna];
			x[linha][coluna]=(y[linha][coluna]+x[linha][coluna])-y[linha][coluna];
			
			}
	
		}


		for(linha=0;linha<=1;linha++){//mostrar o resultado
		
			for(coluna=0;coluna<=1;coluna++){
			
				printf("  %d\t",y[linha][coluna]);
				
				printf("  %d\t",x[linha][coluna]);
				
					
			
			
			}
	printf("\n");
		}
}
