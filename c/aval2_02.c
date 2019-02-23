#include <stdio.h>


 void main(){
	
	
int	matrix[3][2];
int relma[3][2];
int linha,coluna;

	//for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
			
			printf("digite o numero(%d x %d):",coluna, linha);
			scanf("%d",&matrix[linha][coluna]);
	}
		for(coluna=0;coluna<3;coluna++){
		printf("numeros informados%d \n ",matrix[linha][coluna]);
		
		
		}
		
	//}
//	for(linha=0;linha<3;linha++){
	//	for(coluna=0;coluna<3;coluna++){
		
	//	printf("%",matrix[linha][coluna]);
		
		//}
	for(coluna=0;coluna<3;coluna++)	{
		relma[0][0]=matrix[coluna][linha]*matrix[linha][coluna];
		relma[0][0]++;
		printf("resultado %d",relma[0][0]);
			
		}
	}
///	printf("\n");
	
//}
