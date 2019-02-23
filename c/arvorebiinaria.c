#include <stdio.h>
#include <stdlib.h>


typedef struct arvore
{
  int num;
  struct arvore* direita;
  struct arvore* esquerda;
} Arvore;

Arvore* criarArvore(){

  return NULL;
  
}

void insereArvore(Arvore* t,int numparamentro){

	if(t==NULL){
		//alocar menoria da  arvore
		
	  *t = (Arvore*) malloc(sizeof (Arvore));
		(*t)-> num =  numparamentro;
		(*t)-> esquerda= NULL;
		(*t)-> direita = NULL;
		
	}else{
		if(numparamentro < (*t)->num){
			//insere esquerda
			insereArvore(&(*t)->esquerda, numparamentro);
		}else{
			 //insere direita
			 	insereArvore(&(*t)->direita, numparamentro);
		}
	}
	
}
  
  void ExibirArvore(char lado,Arvore* t){
  	
  	printf(" %c", lado);
  	printf(" %d", t->num);
  	exibirArvore("e",t->esquerda);
  	exibirArvore("d",t->direita);
  }
void main(){

  Arvore* t = criarArvore(); //criar uma arvore
	
	
	insereArvore(&t,30);
	insereArvore(&t,20);
	insereArvore(&t,15);
	insereArvore(&t,18);
	insereArvore(&t,10);
	insereArvore(&t,50);
	
	exibirArvore("r",t);

}

