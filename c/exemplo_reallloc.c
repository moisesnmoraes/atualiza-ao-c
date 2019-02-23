#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int *p;
	int x=1 ,y;
	int k=0;
	int a=1;
	int i;
	p = (int *)(malloc(a*sizeof(int)));
	
	while(x!=0){
		printf("informe um valor\n");
		scanf("%d",&y);
		
		if(y>=0){
		p[k]=y;
		k++;
		p = (int *)(realloc(p,(a+1)*sizeof(int)));
		}else{
		printf("Voce deseja parar o programa?\n 0 = sim \n 1 = nao ");
		scanf("%d",&x);
		
		}
		
	}
	
	for(i=0;i<k;i++){
		printf("%d\n",p[i]);
	}
	
} 
