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
	int x;
	//antes de inserir elemento vamos alocar menoria no ponteiro
	
	
	printf("informe um valor para o elemento :%d\n",qtdelementos);
	 
	scanf("%d",&x);
	
	
	if(ProcurarElemento(x)==0){	
		lrPonteiro();
		pVetorElem[qtdelementos] = x;
	
	}else{
		printf("elemento repetido\n");
	}
	menu();
}
void listarElem(){
	int x;
	printf(  "Listrar Elementontos\n");
	for(x=1;x<qtdelementos+1;x++){
		printf("Pos. :%d Elementos :%d \n",x,pVetorElem[x]);
		
	}
	
	
}
int ProcurarElemento(int elemento){
	
	int x;
	for(x=1;x<=qtdelementos;x++){
		if(elemento == pVetorElem[x]){
			return 1;
		}
		
	}
	return  0;
}

void menu(){
	int opc=0;
	int elem;
	int retornoprocura;
	printf("1 - Inserir Elementos\n");
	printf("2 - Listrar  Elementos\n");
	printf("3 - Verificar Elementos\n");
	scanf("%d",&opc);
	switch(opc){
		case 1:
			//chamar a funçao inserir elementos
			insereElemento();
			break;
			
			case 2:
				//chamar  a funçao listar elementos
				listarElem();
				break;
					case 3:
						//chamar a funçao para procurar elementos;
						
						printf("informe o elemento para procurar\n");
						scanf("%d",&elem);
					 	retornoprocura = ProcurarElemento(elem);
					 	if(retornoprocura==1){
					 		printf("elemento %d encontrado\n",elem);
						 }else{
						 	printf("elemento %d nao encontrado\n",elem);
						 }
						break;
						default:
							printf("menu Inexitente\n");
							//menu inexistente
							
							system("cls");
							menu();
						break;	
		}
}
void main(){
	menu();
}
