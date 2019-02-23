#include <stdio.h>


void main(){
	
	int x [2][2];
	int y [2][2];
	int a,b;
	
	for(a=0;a<=1;a++){
		
		for(b=0;b<=1;b++){
			
			printf("informe o valor para matriz x %d  %d \n",a,b);
			scanf("%d",&x[a][b]);
			
			printf("informe o valor para a matriz y %d %d\n",a,b);
			scanf("%d",&y[a][b]);
			
		}
		
	}
		for(a=0;a<=1;a++){
		
		for(b=0;b<=1;b++){
		
		printf("%d valor da matriz x \n",x[a][b]);
		printf("%d valor da matriz y \n",y[a][b]);
		}
	
	
}
}
