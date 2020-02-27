#include <stdio.h>

void main(){

	float notabim1, notabim2, media;
	
	printf("Informe Nota Bimestre 1 ");
	scanf("%f", &notabim1);
	
	printf("Informe Nota Bimestre 2 ");
	scanf("%f", &notabim2);

	media = (notabim1 + notabim2) / 2;
	
	printf("Media = %f \n", media);
	
	if(media >= 7){
		printf("VC FOI APROVADO");
	}else{
		printf("VC FOI REPROVADO");
	}
	
	
	
	
}
