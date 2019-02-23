#include <stdio.h>
//os primeiros seram o ultimos;
//pilha;
typedef struct{
	
	int  dados[4];
	int indposicao;
	
}Tipo_Pilha;
void iniciaPilha(Tipo_Pilha *novaPilha){
	
	printf("Iniciando a pilha\n");
	novaPilha->indposicao = 0;
	printf("\nInicio a pilha\n");
}
void imprimirPilha(Tipo_Pilha novaPilha){
	int controle = novaPilha.indposicao-1;
	
	while(controle != -1){
		printf("\nElementos na Pilha --> %d\n",novaPilha.dados[controle]);
		controle--;
	}
	
	
}
void push(Tipo_Pilha *novaPilha,int novodado){
	//inserir elemento na pilha;
	printf("\nInserindo dado %d\n",novodado);
	novaPilha->dados[novaPilha->indposicao]= novodado;
	
	novaPilha->indposicao = novaPilha->indposicao + 1;
	
}
void pop(Tipo_Pilha *novaPilha){
	
	novaPilha->indposicao = novaPilha ->indposicao-1;
		

	
}

void main(){
	
	Tipo_Pilha novaPilha;
	iniciaPilha(&novaPilha);
	
	push(&novaPilha,19);
	push(&novaPilha,21);
	push(&novaPilha,33);
	imprimirPilha(novaPilha);
	pop(&novaPilha);
	
	
	
}
