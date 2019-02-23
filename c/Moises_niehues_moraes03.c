#include <stdio.h>

	int mx[4][2];
	int l,c;
	int my[4][2];

int funcao(){
	
	//for(c=0;c<=3;c++){
		for(l=0;l<=3;l++){
		//	my[l][0]=mx[l][0]+mx[l][1];
		//	my[l][1]=mx[l][0]-mx[l][1];
		
		my[0][0]=mx[0][0]+mx[3][1];
		
	//	}
		}
		//	for(c=1;c<=0;c--){
		for(l=0;l<=3;l++){
				//my[l][0]=mx[l][0]+mx[l][1];
			//	my[l][1]=mx[l][0]-mx[l][1];
		my[0][1]=mx[3][0]-mx[0][1];
		
		}

		//}
	imprime();
}
int imprime(){
	for(c=0;c<=1;c++){
		
		for(l=0;l<=3;l++){
		printf(" { %d } |\t",mx[l][c]);
		
		}
		printf("\n");
	}
	

for(c=0;c<=1;c++){
		
		for(l=0;l<=3;l++){
		
		printf("{ %d }|\t",my [l][c]);
		}
		printf("\n");
	}
	
}

void main(){
	
	for(c=0;c<=1;c++){
		
		for(l=0;l<=3;l++){
			//liha linha coluna
			printf("informe um valor para linha %d coluna %d \t",l,c);
			scanf("%d",&mx[l][c]);
		}
	}
	
	funcao();
}
