#include <stdio.h>

void main(){
	
	float v1, v2, soma;
	int v3, v4;
	
	printf("Informe valor para V1 \n");
	scanf("%f", &v1);
	
	printf("Informe valor para V2 ");
	scanf("%f", &v2);
	
	soma = (v1+v2);
	
	printf("Valor da soma %f \n", soma);
	printf("Soma de %f + %f = %f \n",v1,v2,soma);
	
	printf("\n Informe o valor para V3 ");
	scanf("%d", &v3);
	
	printf("Informe o valor para V4");
	scanf("%d", &v4);
	
	soma = (v3+v4);
	printf("Soma = %f \n", soma);
	printf("Soma de %d + %d = %f \n", v3,v4, soma);
	
	
	
}
