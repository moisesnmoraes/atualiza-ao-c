#include <stdio.h>

typedef struct{
	int ra;
	float nota1;
	float nota2;
	
}Aluno;


void main(){
	
	Aluno aluno;
	Aluno aluno1;
	Aluno aluno2;
	
	aluno1.ra = 300;
	aluno1.nota1 = 5.5;
	aluno1.nota2 = 4.5;
	
	printf(" Aluno ra %d",aluno1.ra);
	printf("nota 1 %f",aluno1.nota1);
	printf(" nota 2 %f", aluno1.nota2);
	
	printf(" infor,e a nova nota ");
	scanf("%f",&aluno.nota1);
	
	printf("nova nota %f",aluno1.nota1);
	
}
