#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL,"");
	
	int mp,ca;
	int conta[6];
	int nome[6];
	
	float deposito[6];
	int con,dg,ntc;
	int e,t,dt;
	int tranf;
	int depo,comf,d,cos,de;
	int sa, sac,vsa;
	float vd;
	for(mp=0;mp<10;mp++){
	int po;
	
	printf(" Caixa Eletronico\n \n ");
	printf(" 1 - Cadastrar conta.\n 2 - Depósito. \n 3 - Saque.\n 4 - Extrato bancário. \n 5 - Transferencia. \n 6 - Sair. \n");
	scanf("%d",&ca);
	
	if(ca==1){
		printf("agora voce vai cadstrar as contas \n informe o número da conta\n");
		scanf("%d",&conta[con]);
		printf("informe o digito da conta\n");
		scanf("%d",&conta[dg]);
		printf("informe o nome do titular da conta\n");
		scanf("%s",&nome[ntc]);
		
		printf("deseja confirmar o cadastro 1 - SIM \t -2 NÃO \t");
		scanf("%d",&po);
			while(po>=0||po<=1){
		
				if(po==1){
				printf("cadastro realizado com sucesso\n");
		
				nome[ntc]++;
				conta[dg]++;
				conta[con]++;
		}	
					if(po==0){
						printf("cadastra cancelado \n");
					nome[ntc]=0;
					conta[dg]=0;
					conta[con]=0;
			
		}
		else{
		
	
			printf("Opção invalida informe  numero numero novamente\n deseja confirmar o cadastro 1 - SIM \t -2 NÃO \t");
				/*scanf("%d",&po);
					if(po==1){
				printf("cadastro realizado com sucesso\n");
		
				nome[ntc]++;
				conta[dg]++;
				conta[con]++;
		}	
			if(po==0){
			printf("cadastra cancelado \n");
			nome[ntc]=0;
				conta[dg]=0;
				conta[con]=0;
			*/}	
		}
	}
	
	if(ca==2){
		
	printf("Deposito \n Favor informe o numero da sua conta\n");
	scanf("%d",&depo);
	
	for(de=0;de<10;de++){
	if(depo==conta[con]){
		
		
		printf("nome do titular da conta informada %s \t",nome[ntc]);
		
		printf("Informe o valor que deseja depositar ");
		scanf("%f",&deposito[0]);
		
		printf("valor do deposito %f\n Confirmar o valor do deposito - 1\n Cancelar o deposito  - 0\n");
		scanf("%d",&comf);
		if(comf==1){
			printf("seu deposito no valor de %f foi realizado com sucesso\n",deposito[0]);
			
		}
		else{if(comf==0){
			printf("deposito cancelado");
			
			deposito[0]++;
		}
		}if(comf<0||comf>1){
			printf(" opção invalida");
		}
		
	}else{
		printf(" titular não encantrado");
	}
}
	
	}
	if(ca==3){
		printf("saque \n informe o numero da conta\n  ");
		scanf("%d",&sa);
		for(sac=0;sac<10;sac++){
			if(sa==conta[con]){
				
					printf("nome do titular da conta informada %s \t",nome[ntc]);
					printf("informe o valor que deseja sacar\n");
					scanf("%d",&vsa);
			//	if(vsa>=deposito[0]
				
				
					printf("para confirmar o deposito - 1 \n para cancelar - 2 \n");
					scanf("%d",&cos);
					
					if(cos==1){
						
						printf("deposito realizado com sucesso");
						vsa-deposito[0];
						vsa=deposito[0];
						printf("seu novo saldo é %d",deposito[0]);
						deposito[0]=vsa;
						vsa++;
					}
					if(cos==2){
						printf("deposito cancelado!!!");
						
						vsa=0;
					}
					if(cos<1||cos>2){
						
						printf("opção invalida");
					}
				
			if(sa!=conta[con]){
				printf("CONTA NÃO ENCONTRADA");
			}
	}
		
		}
		
	}
	if(ca==4){
		for(e=0;e<6;e++){
			printf("extrato");
			
			printf("conta %d  digito %d titular %s  saldo %f",conta[con],conta[dg],nome[ntc],deposito[0]);
		}
		
		
	}
	if(ca==5){
		
		printf("tranferencia");
		printf("\n");
		printf("informe o numero  da conta\n ");
		scanf("%d",&t);
		printf("informe o digito da conta\n");
		scanf("%d",&dt);
		
		for(tranf=0;tranf<10;tranf++){
			if(t==conta[con]&&dt==conta[dg]){
				
				
			}
		}
		
	}
	if(ca<=0||ca>=7){
		printf("opção invalida informe um numero entre 1  e 6 ");
	}
	if(ca==6){
		
		break;
	}
}
}

