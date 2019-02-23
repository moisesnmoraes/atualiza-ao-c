#include <stdio.h>

	
void bubblesort(int pItem[],int qtelementos){
	int x,y;
	int a;
	for(x=0;x<qtelementos;x++){
		for(y=0;y<qtelementos;y++){
		if(pItem[y+1]>pItem[y]){
						
			a = pItem[y];
			pItem[y]=pItem[y+1];
			
			
			pItem[y+1]=a;
		
			
	
			
		}
	
		}

	}
	
	
}

void main(){
	
	int elementos[]={10,6,4,12,3};
	
	bubblesort(elementos,5);
		int r;
	for(r=0;r<=4;r++){
		printf("elementos %d\n",elementos[r]);
	}
	
}


