#include <stdio.h>


void main(){
	
	 int m[3][5];
	 int x,y;
	 
	 int np, nc, numero[5],numerorepetido;
	 
	 for(x=0;x<=2;x++){
	 	for(y=0;y<=4;y++){
	 		
	 		
	 		printf("\tinforme o valor para %d :%d\n",x,y);
	 		scanf("%d",&m[x][y]);
	 	numerorepetido = 0;
		 }	
				
	 	
	 }
	 for(x=0;x<=2;x++){
	 	for(y=0;y<=4;y++){
				 while(numerorepetido == 0){
					numerorepetido = 1;
					scanf("%d",&m[x][y]);
					
					for(x=0;x<=y;x++){
						for(x=0;x<=y;x++){
							
							if(m[x][y] == m[y][x] && m[x][y] != x){
								printf("Número já informado \n");
								printf("Informe o número novamente \n");
								numerorepetido = 0;
							}
					
						}
					}	
				}
	 
	
	
	}
	
	
	}
	
	
	}
