#include <stdio.h>
#include <locale.h>

//matriz global
float z[4][4];

float somar(float a, float b){
	
	return(a+b);
	
	
}
float subtrair(float a, float b){
	
	return(a-b);
	
	
}

int imprimirmatriz(){
	int l , c;
		for(l=0;l<=3;l++){
			for(c=0;c<=3;c++){
				printf("%.1f \t",z[l][c]);
				
				
			}
			printf("\n");
		}
	return 0;
}

void main(){
	setlocale(LC_ALL,"	");
	
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
	imprimirmatriz();
}

