#include <stdio.h>
//função para efetivar somas...
//variavais sao locais so funcionam  quanto executadas 
float somar(float a, float b){
	
	return(a+b);
	
	
}


void main(){
	
	float minhamatriz[2][2];
	minhamatriz[0][0] = somar(10,20);
	
 printf(" resultado da soma %.2f",somar(10,20));	
	
	
}
