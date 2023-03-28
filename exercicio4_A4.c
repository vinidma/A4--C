 /*Faça um programa que calcule o número de dias corridos entre duas datas, para vários
pares de datas, considerando a possibilidade de ocorrência de anos bissextos, sendo que: 
a. A primeira data é sempre a mais antiga
b. O ano é fornecido com 4 dígitos
c. A data fornecida com ZERO dias é o sinal para encerrar a entrada de dados*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>

 
 typedef struct{
 	int dia;
 	int mes;
 	int ano;
 } Data;
 
 int anobissexto (int ano);
 unsigned long dist_dias(Data inicio, Data fim);
 
 int dias_mes[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
 {0,31,29,31,30,31,30,31,31,30,31,30,31}};
 
 int main (void){
 	Data dia1, dia2;
 	printf("Entre com a data inicial:\n");
 	scanf("%d/%d/%d", &dia1.dia, &dia1.mes, &dia1.ano);
 	printf("Entre com a data final:\n");
 	scanf("%d/%d/%d", &dia2.dia, &dia2.mes, &dia2.ano);
 	
 	printf("Quantidade de dias:%lu\n", dist_dias(dia1,dia2));
 	return 0;
 	
 }
 
 int anobissexto (int ano){
 	return(ano% 4==0)&&((ano%100 !=0)||(ano%400==0));
 }
 
 unsigned long dist_dias (Data inicio, Data fim){
 		unsigned long idias, fdias;
 		unsigned long def_anos = 0;
 		
 		
 	register int i;
 		int danobissexto;
 		
 		idias=inicio.dia;
 		danobissexto=anobissexto(inicio.ano);
 		for(i=inicio.mes - 1; i>0; --i);
 			idias += dias_mes[danobissexto][i];
			 
			 fdias=fim.dia;
 		danobissexto=anobissexto(fim.ano);
 		for(i=fim.mes - 1; i>0; --i);
 			fdias += dias_mes[danobissexto][i]; 	
 			
 			while(inicio.ano<fim.ano)
 				def_anos += 365 + anobissexto(inicio.ano++);
 				
 		return def_anos - idias + fdias +1;
 	
 	
 	
 	
 	
 	
 }
