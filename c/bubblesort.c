#include <stdio.h>

	int elementos[]={20,3,4,5,9,19,31,2,1};
	
void bubblesort(int pItem[],int qtelementos){
	int x,y;
	int a;
	for(x=0;x<qtelementos;x++){
		for(y=0;y<qtelementos;y++){
		if(pItem[y+1]>=pItem[y]){
						
			a = pItem[y];
			pItem[y]=pItem[y+1];
			
				pItem[y+1]=a;
			
	
			
		}
			
	
		}

	}
	
	
}

void main(){
	
	system("pause");
	
	//com numero negativo nao funcionou
	bubblesort(elementos,9);
			int r;
	for(r=0;r<=8;r++){
		printf("elementos %d\n",elementos[r]);
	}
	
}


