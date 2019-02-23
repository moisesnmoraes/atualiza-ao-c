#include <stdio.h>


typedef struct{
	int ano;
	float preco;
	char modelo ;
} Veiculo;


/*int imprimir(){

	
		printf(" ANO : %d \n",tipo.ano);
		printf("PRECO PRETENDIDO : %f\n",tipo.preco);
}*/


void main(){

	Veiculo tipo;
  	printf("informe o modelo do  seu veiculo\n");
  	scanf("%s",&tipo.modelo);
  	
  	printf("informe o ano do seu veiculo\n");
  	scanf("%d",&tipo.ano);
  	
  	printf("informe o valor que deseja vender seu carro\n");
  	scanf("%f",&tipo.preco);
  	
  //	imprimir();
  		
  		
		printf(" ANO : %d \n",tipo.ano);
		printf("PRECO PRETENDIDO : %f\n",tipo.preco);
	   	printf("MODELO : %s \n",tipo.modelo);
}
