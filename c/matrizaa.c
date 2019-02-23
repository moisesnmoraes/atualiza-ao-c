#include <stdio.h>



void main (){
	
	int a[3][2];
	int l,c;
	
	for(c=0;c<=2;c++){
		
		for(l=0;l<=1;l++){
			//coluna coluna linha 
			printf("informe um valor para linha %d coluna %d \t",c,l);
			scanf("%d",&a[c][l]);
		}
	}//apresentatondo o valor detro da matriz lembrar do espaço 
		for(c=0;c<=2;c++){
		
		for(l=0;l<=1;l++){
		printf("%d ",a[c][l]);


}
	printf("\n");

}}
