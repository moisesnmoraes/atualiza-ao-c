#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "");
	
	int opcao, menu;
	opcao = 0;
	float deposito, saque;
	deposito = 0;
	saque = 0;
	float saldo;
	saldo = 598;
	menu = 1;
	
	while(menu ==1){
		printf("1 - Dep�sito \n");
		printf("2 - Saque \n");
		printf("3 - Transfer�ncia \n");
		printf("4 - Extrato Banc�rio \n");
		printf("Digite sua op��o \n");
		scanf("%d", &opcao);
		
	
		if(opcao == 1){
			printf("Informe o valor do dep�sito");
			scanf("%d", &deposito);
		}
		
		if(opcao == 2){
			printf("Informe o saldo de saque");
			scanf("%d", &saque);
		}
		
		if(opcao == 3){
			printf("Op��o indispon�vel");
		}
		
		if(opcao == 4){
			printf("Saldo");
		}
	
	}
	
	
}
