#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main()
{//============================================================================================= VARIAVEIS
int menu, i, m1, d1, res, r1, r2, op1, op2 ,op3, rr1, acerto, erro,fim, mes1, dia, pont1=0, pont2=0, pont3=0;

char mes[25], sig[24], s1[60], s2[60], p0[20], p1[20], p2[20];
char nome[60];
char nome1[60];
char nome2[60];

strcpy(nome,"Nenhum");
strcpy(nome1,"Nenhum");
strcpy(nome2,"Nenhum");



//=============================================================================================== SETAR BIBIOTECAS

setlocale(LC_ALL,"");//  <locale.h>
srand(time(NULL));//     <stdlib.h>
	
//=============================================================================================== MENU (MOSTRAR OPÇOES)
	do {
system("cls");
printf("Jogo Dos Signos\n\n");

printf("1 - Joga\n\n");
printf("2 - Recordes (não esta 100%)\n\n");
printf("3 - Descubra seu signo\n\n");
printf("4 - Sair\n\n");
menu=4;
scanf("%d",&menu);

//=============================================================================================== SETAR VARIAVEIS

	acerto=0;
	erro=0;
	i=0;
//=============================================================================================== INICIO DO SWITCH
switch (menu) {
//===============================================================================================	CASE 1

	case 1 :
		
//=============================================================================================== SETAR VARIAVEIS 2
	
		while(i<10){
		d1=0;
		m1=0;
		op1=5;
		op2=5;
		op3=5;
		r1=0;
		r2=0;
		res=0;
//=============================================================================================== GERAR OS DIAS ALIATORIAMENTE E VERIFICAR SUA VALIDADE	
		
		
		while(m1<1){
		 
		m1=rand()%12;
		}
		
		while(d1<2){

		d1=rand()%32;
		}
		
		while(m1==2 && d1 >29 || m1==4 && d1>30 || m1==6 && d1 >30 || m1==9 && d1 >30 || m1==11 && d1 >30 ){
		
			d1=rand()%32;
//===============================================================================================SETAR O VALOR DE "MES" APARTIR DO MES SELECIONADO
		}
	
		if(m1==1){
			strcpy(mes,"Janeiro");
		}
		if(m1==2){
			strcpy(mes,"Fevereiro");
		}
		if(m1==3){
			strcpy(mes,"Março");
		}
		if(m1==4){
			strcpy(mes,"Abril");
		}
		if(m1==5){
			strcpy(mes,"Maio");
		}
		if(m1==6){
			strcpy(mes,"Junho");
		}
		if(m1==7){
			strcpy(mes,"Julho");
		}
		if(m1==8){
			strcpy(mes,"Agosto");
		}
		if(m1==9){
			strcpy(mes,"Setembro");
		}
		if(m1==10){
			strcpy(mes,"Outubro");
		}
		if(m1==11){
			strcpy(mes,"Novembro");
		}
		if(m1==12){
			strcpy(mes,"Dezembro");
		}
		
//=============================================================================================== DEFINIR QUAL O SIGNO DO MES E DIA SORTEADO
		
		if(m1==1 && d1 >20 || m1==2 && d1 < 19){
			strcpy(sig,"Aquário");
		
	}else{
		if(m1==2 && d1>18 || m1==3 && d1< 21){
				strcpy(sig,"Peixes");
			
		}else{
			if(m1==3 && d1>20 || m1==4 && d1<21 ){
					strcpy(sig,"Áries");
				
			}else{
			if(m1==4 && d1>20 || m1==5 && d1<21 ){
					strcpy(sig,"Touro");
				
			}else{
			if(m1==5 && d1>20 || m1==6 && d1<21 ){
					strcpy(sig,"Gêmeos");
				
			}else{
			if(m1==6 && d1>20 || m1==7 && d1<23 ){
					strcpy(sig,"Câncer");
				
			}else{
			if(m1==7 && d1>22 || m1==8 && d1<23 ){
			
					strcpy(sig,"Leão");
				
			}else{
			if(m1==8 && d1>22 || m1==9 && d1<23 ){
					strcpy(sig,"Virgem");
				
			}else{
			if(m1==9 && d1>22 || m1==10 && d1<23 ){
					strcpy(sig,"Libra");
				
			}else{
			if(m1==10 && d1>22 || m1==11 && d1<22 ){
					strcpy(sig,"Escorpião");
				
			}else{
			if(m1==11 && d1>21 || m1==12 && d1 < 22 ){
					strcpy(sig,"Sagitário");
				
			}else{
			if(m1==12 && d1>21 || m1==1 && d1<21 ){
					strcpy(sig,"Capricórnio");
				
			}else{
				printf("\n erro \n\n");
				system("pause");
		
	}
}}}}}}}}}}}
//=============================================================================================== SORTIO DO NUMERO DOS SIGNOS DAS OPÇOES FALSAS

while(r1==0){
	r1=rand()%13;
}

while(r2==0){
	r2=rand()%13;
}

		while(m1==r1 || m1==(r1+1) || m1==(r1-1)){
			r1=rand()%13;
		}

		while(m1==r2 || m1==(r2+1) || m1==(r2-1)){
			r2=rand()%13;
		}
//=============================================================================================== APARTIR DO PRIMEIRO NUMERO DOS SIGNOS FALSOS DETERMINAR SUA 
//STRING
		
		if(r1==1){
			strcpy(s1,"Aquário");
		}
		if(r1==2){
			strcpy(s1,"Peixes");
		}
		if(r1==3){
			strcpy(s1,"Áries");
		}
		if(r1==4){
			strcpy(s1,"Touro");
		}
		if(r1==5){
			strcpy(s1,"Gêmeos");
		}
		if(r1==6){
			strcpy(s1,"Cânçer");
		}
		if(r1==7){
			strcpy(s1,"Leão");
		}
		if(r1==8){
			strcpy(s1,"Virgem");
		}
		if(r1==9){
			strcpy(s1,"Libra");
		}
		if(r1==10){
			strcpy(s1,"Escorpião");
		}
		if(r1==11){
			strcpy(s1,"Sagitário");
		}
		if(r1==12){
			strcpy(s1,"Capricórnio");
		}
		
//=============================================================================================== APARTIR DO PRIMEIRO NUMERO DOS SIGNOS FALSOS DETERMINAR SUA 
//STRING
	
		if(r2==1){
			strcpy(s2,"Aquário");
		}
		if(r2==2){
			strcpy(s2,"Peixes");
		}
		if(r2==3){
			strcpy(s2,"Áries");
		}
		if(r2==4){
			strcpy(s2,"Touro");
		}
		if(r2==5){
			strcpy(s2,"Gêmeos");
		}
		if(r2==6){
			strcpy(s2,"Câncer");
		}
		if(r2==7){
			strcpy(s2,"Leão");
		}
		if(r2==8){
			strcpy(s2,"Virgem");
		}
		if(r2==9){
			strcpy(s2,"Libra");
		}
		if(r2==10){
			strcpy(s2,"Escorpião");
		}
		if(r2==11){
			strcpy(s2,"Sagitário");
		}
		if(r2==12){
			strcpy(s2,"Capricórnio");
		}
		
//===============================================================================================SORTEIO DE NUMEROS ALIATORIOS PARA USAR NA SORTEIO DAS OPÇOES
	
		op1=rand()%3;
		
		op2=rand()%3;
		while(op1==op2){
			op2=rand()%3;
		}
		
		op3=rand()%3;
		while(op3==op1 || op3==op2){
		op3=rand()%3;
		}
		
//===============================================================================================APARTIR DO NUMEROS SORTEIO A SEQUENCIA DAS OPÇOES
		if(op1==1){
			strcpy(p2,sig);	
			rr1=1;
		}
		if(op1==2){
			strcpy(p2,s2);	
		}
		if(op1==0){
			strcpy(p2,s1);	
		}
		
		if(op2==1){
			strcpy(p1,sig);	
		    rr1=2;
		}
		if(op2==2){
			strcpy(p1,s2);	
		}
		if(op2==0){
			strcpy(p1,s1);	
		}
		
		if(op3==1){
			strcpy(p0,sig);	
			rr1=3;
		}
		if(op3==2){
			strcpy(p0,s2);	
		}
		if(op3==0){
			strcpy(p0,s1);	
		}
//=============================================================================================== O I É O VALOR DO WHILE NO COMEÇO QUANDO CHEGAR EM 10 SESSA ELE
		i=i+1;	
//=============================================================================================== MOSTRA A QUESTAO PARA O USUARIO
		printf("%d Se a uma pessoa narcer no dia %d de %s. Qual seu signo\n",i,d1, mes);
		printf("                                                           acertos( %d ) \n",acerto);
		printf("                                                           erros  ( %d ) \n",erro);
		printf("               1-%s 2-%s 3-%s   ",p2,p1,p0);
		scanf("%d",&res);
	while(res>3){
	printf("Numero digitado não corespode com as opções.\n");
	printf("Digite uma opção valida\n\n");
	scanf("%i",&res);
	}
//=============================================================================================== MOSTRA SE O USUARIO ACERTOU OU ERROU
	
		if(res==rr1){
			printf("correto \n \n \n \n \n");
			acerto=acerto+1;
		}else{
			printf("incorreta \n \n \n \n \n");
			erro=erro+1;
		}
		
	}
//===============================================================================================	DEPOIS DE RESPONDE AS 10 QUESTOES MOSTRA O RESULTADO DO 
//USUARIO

		system("cls");
	
		printf("Você acertou %d  | E errou %d \n",acerto,erro);
		
//=============================================================================================== processamento de recordes
		
		if(acerto>pont1){
			printf("Digite seu nome pois seua pontuaçao foi recorde ");
			
				if(pont1>0){
					
				strcpy(nome1,nome);
				pont2=pont1;}
				
			scanf("%s",nome);
			pont1=acerto;
			
		}else{if(acerto>pont2){
			printf("Digite seu nome pois seua pontuaçao foi recorde ");
		
		if(pont2>0){
					
				strcpy(nome2,nome1);
				pont3=pont2;}
				
			scanf("%s",nome1);
			pont2=acerto;
			
		}else{if(acerto>pont3){
			printf("Digite seu nome pois seua pontuaçao foi recorde   ");
			scanf("%s",nome2);
			pont3=acerto;
			
		}
		}
		}
		
		
		
		
		system("pause");

//=============================================================================================== FIM DO CASE 1

		break;
//=============================================================================================== INICIO DO CASE 2
	case 2 :
		
		printf("                  RECORDES \n\n\n\n");
		printf("%s =  %d\n",nome,pont1);
		printf("%s =  %d\n",nome1,pont2);
		printf("%s =  %d\n",nome2,pont3);
		system("pause");
	
	break;
	
//=============================================================================================== FIM DO CASE2
//=============================================================================================== INICIO DO CASE 3	
	case 3 :
		
//=============================================================================================== FAZER PERGUNTAS PARA O USUARIO
	printf("Descubra seu signo!!\n\n");

	printf("Que mes você naceu = ");
//=============================================================================================== RESPONDER A PRIMEIRA PERGUNDA E VERIFICAR SE VALOR É CORRETO
	scanf("%i", &mes1);
	
	while((mes1>=13) || (mes1==0))
	{
	printf("Mes invalido digite outro = ");
	
	scanf("%i", &mes1);
	 } 
	 
//=============================================================================================== ENTRADA DO SEGUNDO VALOR
	 
	 printf("Que dia você naceu = ");
	 
	 scanf("%i",&dia);
	
//=============================================================================================== VERIFICAR SE O SEGUNDO VALOR É CORRETO

	 	while((dia>=32) || (dia==0))
			{
			printf("Dia invalido digite outro \n ");
			
			scanf("%i", &dia);
			system("cls");
			
//=============================================================================================== FAZER A VERIFICAÇAO APARTIR DA QUANTIDADE DE DIAS DE CADA MÊS
			
			}
if (mes1==2 && dia >29 || mes1==4 && dia>30 || mes1==6 && dia >30 || mes1==9 && dia >30 || mes1==11 && dia >30 ){

	printf("data invalida");}else{
		
//=============================================================================================== SE A DATA BATER MOSTRA O SIGNO AQUÁRIO
		
	if(mes1==1 && dia >20 || mes1==2 && dia < 19){
		printf("\n Seu signo é Aquário \n\n");
		system("pause");
	}else{
//=============================================================================================== SE A DATA BATER MOSTRA O SIGNO PEIXES
		if(mes1==2 && dia>18 || mes1==3 && dia< 21){
			printf("\n Seu signo é Peixes \n\n");
			system("pause");
		}else{
//=============================================================================================== SE A DATA BATER MOSTRA O SIGNO ÁRIES
			if(mes1==3 && dia>20 || mes1==4 && dia<21 ){
				printf("\n Seu signo é Áries \n\n");
				system("pause");
			}else{
//=============================================================================================== SE A DATA BATER MOSTRA O SIGNO TOURO
			if(mes1==4 && dia>20 || mes1==5 && dia<21 ){
				printf("\n Seu signo é Touro \n\n");
				system("pause");
			}else{
//=============================================================================================== SE A DATA BATER MOSTRA O SIGNO GÊMEOS
			if(mes1==5 && dia>20 || mes1==6 && dia<21 ){
				printf("\n Seu signo é Gêmeos \n\n");
				system("pause");
			}else{
//=============================================================================================== SE A DATA BATER MOSTRA O SIGNO CÂNCER
			if(mes1==6 && dia>20 || mes1==7 && dia<23 ){
				printf("\n Seu signo é Câncer \n\n");
				system("pause");
			}else{
//=============================================================================================== SE A DATA BATER MOSTRA O SIGNO LEÃO
			if(mes1==7 && dia>22 || mes1==8 && dia<23 ){
				printf("\n Seu signo é Leão \n\n");
				system("pause");
			}else{
//=============================================================================================== SE A DATA BATER MOSTRA O SIGNO VIRGEM
			if(mes1==8 && dia>22 || mes1==9 && dia<23 ){
				printf("\n Seu signo é Virgem \n\n");
				system("pause");
			}else{
//=============================================================================================== SE A DATA BATER MOSTRA O SIGNO LIBRA
			if(mes1==9 && dia>22 || mes1==10 && dia<23 ){
				printf("\n Seu signo é Libra \n\n");
				system("pause");
			}else{
//=============================================================================================== SE A DATA BATER MOSTRA O SIGNO ESCORPIÃO
			if(mes1==10 && dia>22 || mes1==11 && dia<22 ){
				printf("\n Seu signo é Escorpião \n\n");
				system("pause");
			}else{
//=============================================================================================== SE A DATA BATER MOSTRA O SIGNO SAGITÁRIIO
			if(mes1==11 && dia>21 || mes1==12 && dia < 22 ){
				printf("\n Seu signo é Sagitário \n\n");
				system("pause");
			}else{
//=============================================================================================== SE A DATA BATER MOSTRA O SIGNO CAPRICÓRNIO
			if(mes1==12 && dia>21 || mes1==1 && dia<21 ){
				printf("\n Seu signo é Capricórnio \n\n");
				system("pause");
			}else{
//=============================================================================================== CASO AS DATAS NAO BATAM MOSTRA Q DEU ERRO
				printf("\n erro \n\n");
				system("pause");
//=============================================================================================== FINALIZAR OS CONJUNTOS }
			}
		}
	}
	}		
}
}
}
}
}
}
}
}
}
//===============================================================================================FIM DO CASE 3

	break;
	
	case 4:
//===============================================================================================
		
		fim=1;
		
//===============================================================================================		
	break;
	
	 default :
//===============================================================================================

	 	printf("Opção invalida");
	 	system("pause");
	 	
//=============================================================================================== ESSE WHILE PARA FINALIZAR O CODIGO
}
} while(fim==0);


 }
