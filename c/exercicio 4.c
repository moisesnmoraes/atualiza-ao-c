#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "");
	
	float ht, vh, pd, sb, td, sl;
	ht = 0;
	vh = 0;
	pd = 0; 
	sb = 0;
	td = 0;
	sl = 0;
	
	// entradas do algoritmo
	printf("Informe Horas Trabalhadas (HT) ");
	scanf("%f", &ht);
	
	printf("Informe valor horas trabalhadas (VH) ");
	scanf("%f", &vh);
	
	printf("Informe percentual de desconto (PD) ");
	scanf("%f", &pd);
	
	// processamentos
	// encontra o salario bruto
	sb = (ht * vh);
	
	// sal�rio com desconto 
	td = ((pd/100)*sb);
	
	// sal�rio l�quido 
	sl = (sb - td);
	
	// sa�das do algoritmos
	printf("Horas trabalhadas %f \n", ht);
	printf("Sal�rio Bruto %f \n ", sb);
	printf("Total desconto %f \n ", td);
	printf("Sal�rio Liquido %f \n", sl);
	
	
	
}
