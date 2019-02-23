#include <stdio.h>
#include <stdlib.h>


int *pVetorElem;
int qtdelementos =0;


void lrPonteiro(){
	
	//aloca ou realoca ponteiros;
	
	if( qtdelementos==0){
		//se nao tiver elementos aloca;
		pVetorElem = (int *)(malloc(1*sizeof(int)));
	}else{
		//se tiver elementos realoca;
			pVetorElem = (int *)(realloc(pVetorElem,(qtdelementos)*sizeof(int)));
		
	}
	qtdelementos++;
	
}

void insereElemento(){
	//antes de inserir elemento vamos alocar menoria no ponteiro
	lrPonteiro();
	
	printf("informe um valor para o elemento :%d\n",&qtdelementos);
	scanf("%d",&)
}

void menu(){
	int opc=0;
	printf("1 - Inserir Elemento\n");
	printf("2 - Listrar  Elemento\n");
	scanf("%d",&opc);
	switch(opc){
		case 1:
			//chamar a funçao inserir elementos
			break;
			
			case 2:
				//chamar  a funçao listar elementos
				break;
					default:
						//menu inexistente
						break;
		}
}



void main(){
	menu();
	
}
