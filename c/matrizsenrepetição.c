#include <stdio.h>

void main(){
	
	int a[5][2];
	int aux[10][2];
	int linha,coluna;
	int l,c;
	
	for(linha=0;linha<=4;linha++){
		
		for(coluna=0;coluna<=1;coluna++){
			printf("informe o valor da linha %d coluna %d \n \t",linha,coluna);
			scanf("%d",&a[linha][coluna]);
			
		}
		
	}
		for(l=0;l<=linha;l++){
		
	
			for(c=0;c<=coluna;c++){
				
				a[linha][coluna]=aux[l][c];
		
		
			}
	}
	
	
	for(l=0;linha<=l;l++){
		
	
			for(c=0;coluna<=c;c++){
				
				while(aux[l][c]>0){
					if(aux[l][c]>1){
						
						printf("numero ja foi declarado");
					}
					if(aux[l][c]<=1){
						printf("nenhum numero é repetido");
					}
					
				}
			
			}
		}
	
}			
