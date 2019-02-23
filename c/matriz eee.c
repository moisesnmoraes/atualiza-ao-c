#include <stdio.h>



void main (){
	
	int a[3][2];
	int l,c;
	
	for(c=0;c<=1;c++){
		
		for(l=0;l<=2;l++){
			//liha linha coluna
			printf("informe um valor para linha %d coluna %d \t",l,c);
			scanf("%d",&a[l][c]);
		}
	}
	
	
}
