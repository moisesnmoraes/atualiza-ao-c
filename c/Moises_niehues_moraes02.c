#include <stdio.h>
int o;
float s ,n;

float sm;
int menu(){
	printf("informe a operacao que deseja realizar\n 1-soma\n 2-subritacao\n 3-mutiplicacao\n");
	scanf("%d",&o);
	if(o==1){
		soma();
	}
	if(o==2){
		subtracao();
		}

	if(o==3){
		mutiplicacao();
	}else{
		printf("opcao invalida \n ");
		menu();
	}
		}

int soma(){
	printf("informe o primeiro numero\n");
	scanf("%f",&s);
	
	printf("informe o segundo numero\n");
	scanf("%f",&n);
		sm=s+n;
	printf(" a soma e : %.2f\n",sm);

	menu();
}
int subtracao(){
		printf("informe o primeiro numero\n");
	scanf("%f",&s);
	
	printf("informe o segundo numero\n");
	scanf("%f",&n);
		sm=s-n;
	printf(" a soma e : %.2f\n",sm);

	menu();
	
}
int mutiplicacao(){
	
		printf("informe o primeiro numero\n");
	scanf("%f",&s);
	
	printf("informe o segundo numero\n");
	scanf("%f",&n);
		sm=s*n;
	printf(" a soma e : %.2f \n \n",sm);

	menu();
}

void main(){
	
	menu();
}
