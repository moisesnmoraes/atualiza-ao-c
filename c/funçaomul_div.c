#include <stdio.h>


//matriz global
float z[4][4];


//função para efetivar somas...
float somar(float a, float b){
	
	return(a+b);
	
	
}
//função para efetivar subitraçao...
float subtrair(float a, float b){
	
	return(a-b);
	
	
}
float dividir(float a, float b){
	
	return(a/b);
	
	
}
float multiplicar(float a, float b){
	
	return(a*b);
	
	
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
	//soma e subtaçao
	printf("imprimir soma  e subtracao\n ");
	imprimirmatriz();
	for(l=0;l<=3;l++){
		z[l][2]= multiplicar(z[l][0], z[l][1]);
		z[l][3]= dividir(z[l][0], z[l][1]);
		
	}
	printf("imprimir multiplicacao e divisao\n");
	imprimirmatriz();
}

