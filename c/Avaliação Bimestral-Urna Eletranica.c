#include <stdio.h>
#include <locale.h>


 void main(){
	   
	   
	   
	   char op1='s'; char op2='s'; char op3='s';
	   char op='s';
	   char nome[3][30];
	   int votos[10];
	   int num[3];
	   int i=0;
	   int ac;
	   int opcao;
	   char recadastro='s';
	   
	   
	   while(op1=='1'){
	   
					  printf("\n");
					  printf("1-Cadastrar Nome e Codigo Dos Candidatos\n");
					  printf("2- Listar Candidatos Cadastrados		\n");
					  printf("3-Votar Nos Candidatos 	  \n");
					  printf("4-Apurar a Votacao			  \n");
					  printf("*5-Sair								  \n");
					  printf("\n");
					 
					 
					  printf("\tInforme A Opcao Desejada\n"); 
					
					  scanf("%i", &opcao);
					  system("cls");
					  
					  switch(opcao){
									case 1:
										 while(recadastro=='s'){					   
										 printf("\t** Cadastro **\n");	
										 while( i < 3 ){
																
												printf("Digite O Nome Do Candidato %i:",i);
												scanf("%s", &nome[i]);
												printf("Digite O Codigo Do Candidato %i:",i);
												scanf("%i", &num[i]);
												i++;
												}
												i=0;
												system("cls");
													
													printf("\t**Os Cadastrados Foram Feitos**\n");
													printf("Deseja Recadastrar Candidatos (S/N)");
													scanf("%s", &recadastro);
													system("cls");
													}
													
													printf("PARA VOLTAR AO MENU PRESSIONE 1  PARA SAIR PRESSIONE 2");
													scanf("%s", &op1);
													
													system("cls");
													
													
										 break;   
										 case 2:
											  printf("\t****************************\n");
											  printf("\t** Candidatos Cadastrados **\n");
											  printf("\t****************************\n");
											  i=0;
											  while ( i < 3 ){
													printf("Nome e' %s e seu Codigo %i\n", nome[i], num[i]);
													i++;
												   }
												   printf("\n\n");
												   printf("PARA VOLTAR AO MENU PRESSIONE 1 \n PARA SAIR PRESSIONE 2\n");
												   scanf("%s", &op1);
												   system("cls");
												   
												   
											  break;					 
									case 3:
										 printf("\t**************\n");
										 printf("\t** Votacoes **\n");
										 printf("\t**************\n");
										
											 break;
										 case 4:
											  printf("*******************************\n");
											  printf("*** Ver andamento da votacao***\n");
											  printf("*******************************\n");
										   break;									
									case 5:
										 printf("** Sair **\n");
										 printf("PARA VOLTAR AO MENU PRESSIONE 1 \n PARA SAIR PRESSIONE 2\n");
										 return(0);
										 break;
									default:
											printf("**Escolha uma Opcao Valida**\n");
									}
					  
					  
					  
					  
						 
						 system("pause");
						 }
						 
						 }
