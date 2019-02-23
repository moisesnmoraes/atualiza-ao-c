#include <stdio.h>
#include <locale.h>
float somar(float a, float b){
	
	return(a+b);
	
	
}
float subtrair(float a, float b){
	
	return(a-b);
	
	
}


void main(){
	setlocale(LC_ALL,"	");
	float z[4][4];
	// l para baixo 
	int l , c;
	
	for(l=0;l<=3;l++){
		printf("informe o primeiro valor    \t");
		scanf("%f",&z[l][0]);
		
		printf("informe o segundo  valor    \t");
		scanf("%f",&z[l][1]);
		
		
		z[l][2]= somar(z[l][0], z[l][1]);
		z[l][3]= subtrair(z[l][0], z[l][1]);
		
		
	}
	
	for(l=0;l<=3;l++){
		for(c=0;c<=3;c++){
			printf("%.1f",z[l][c]);
			
			
		}
		printf("\n");
	}
}

