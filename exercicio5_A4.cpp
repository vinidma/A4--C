/*Foi realizada uma pesquisa em Niter�i, com um n�mero indeterminado de pessoas. De
cada entrevistado foram colhidos os seguintes dados:
a. Qual o seu clube de futebol de prefer�ncia (1 � Flamengo, 2 � Vasco, 3 �
Fluminense, 4 � Botafogo, 5 � Outros);
b. Qual o seu sal�rio;
c. Qual a sua cidade natal (1 � Niter�i, 2 � Outra) .
Para finalizar a entrevista devemos digitar o valor 0 (zero). Escreva um programa que
informe:
a. N�mero de torcedores por clube;
b. M�dia salarial dos torcedores de cada time;
c. N�mero de pessoas nascidas em Niter�i e que n�o torcem para nenhum dos
principais clubes do Rio;
d. N�mero de pessoas entrevistadas.*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<locale.h>


main()
{
	setlocale(LC_ALL, "Portuguese");
	int v=0; 
	int c=0, c1=0, c2=0, c3=0, c4=0, c5=0; 
	int sal, semtimeNiteroi= 0;
	float soma_salario1=0, soma_salario2=0, soma_salario3=0, soma_salario4=0, soma_salario5=0;
	float mediasalarioVas=0, mediasalarioFla=0, mediasalarioFlu=0, mediasalarioBota=0, mediasalarioOutros=0;	
	
	do{
		printf("\nDigite o numero correspondente ao seu time e aperte enter:\n ");
		printf("\n\n 1-Flamengo\n 2-Vasco\n 3-Fluminense\n 4-Botafogo\n 5-Outros\n\n");
		scanf("%i", &v);
		switch(v)
		{
			case 0:
				printf("\n Digite 0 mais duas vezes para encerrar");
				break;
				
			case 1:
				c1= c1 + 1;
				printf("\nFlamengo - Op��o registrado!");
				printf("\n\nDigite o seu salario:R$");
				scanf("%d", &sal);
				soma_salario1 = soma_salario1 + sal;
       			break;
				
			case 2:
				c2= c2+1;
				printf("\nVasco - Op��o registrado!");
				printf("\n\nDigite o seu salario:R$");	
				scanf("%d", &sal);			
				soma_salario2 = soma_salario2 + sal;					
       			break;
				
		  	case 3:
				c3= c3+1;
				printf("\nFluminense - Op��o registrado!");
				printf("\n\nDigite o seu salario:R$");
				scanf("%d", &sal);			
				soma_salario3 = soma_salario3 + sal;			
				break;
				
			case 4:
				c4= c4+1;
				printf("\nBotafogo - Op��o registrado!");
				printf("\n\nDigite o seu salario:R$");
				scanf("%d", &sal);			
				soma_salario4 = soma_salario4 + sal;				
				break;
				
			case 5:
				c5= c5+1;
				printf("\nOutros - Op��o registrado!");
				printf("\n\nDigite o seu salario:R$");
				scanf("%d", &sal);			
				soma_salario5 = soma_salario5 + sal;				
				break;
			
			default:
				printf("Op��o incorreta");
				break;						
		}
		if(v == 5){
		
			printf("\nQual sua cidade natal:\n\n");
			printf("\n1-Niter�i\n2-Outra\n\n");
			scanf("%i", &c);
		
			switch(c){
				case 0:
					printf("\n vota�ao encerrada!");
					break;
					
				case 1:
					printf("\nNiter�i - Op��o Registada!\n");
					semtimeNiteroi++;
					break;
					
				case 2:
					printf("\nOutra\n");
					break;
			
			}
		}	
		if(v >= 0 && v<5){
		
			printf("\nQual sua cidade natal:\n\n");
			printf("\n1-Niter�i\n2-Outra\n\n");
			scanf("%i", &c);
		
			switch(c){
				case 0:
					printf("Vota�ao encerrada!");
					break;
					
				case 1:
					printf("\nNiter�i - Op��o Registada!\n");
					break;
					
				case 2:
					printf("\nOutra\n");
					break;
			
			}
		}
	}while(v!=0 && c!=0);
	if (c1 != 0) 
		mediasalarioFla = soma_salario1 / c1;
	if (c2 != 0) 
		mediasalarioVas = soma_salario2 / c2;
	if (c3 != 0) 
		mediasalarioFlu = soma_salario3 / c3;
	if (c4 != 0) 
		mediasalarioBota = soma_salario4 / c4;
	if (c5 != 0) 
		mediasalarioOutros = soma_salario5 / c5;
		
	printf("\n\n Numeros de torcedores por clube: \n Flamengo %d\n Vasco %d\n Fluminense %d\n Botafogo %d\n Outros %d",c1, c2, c3, c4, c5);		
	printf("\n\n Media salarial dos torcedores por clube:\n Flamengo %.2f\n Vasco %.2f\n Fluminense %.2f\n Botafogo %.2f\n Outros %.2f\n", mediasalarioFla, mediasalarioVas, mediasalarioFlu, mediasalarioBota, mediasalarioOutros);	
	printf("\nPessoas nascidas em Niter�i e que n�o torcem para nenhum dos principais clubes do Rio: %d\t", semtimeNiteroi);
	printf("\n\nO numero total de pessoas entrevistadas foi %d", c1+c2+c3+c4+c5);	
		
	getchar();
	printf("\n\n");
	return 0;
}
