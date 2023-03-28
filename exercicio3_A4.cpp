/*Escreva um programa que leia o sal�rio fixo de um vendedor de uma loja e o valor total de
vendas efetuadas por ele no m�s. Acrescente ao sal�rio um pr�mio, conforme a tabela a
seguir:
O programa deve calcular e informar o sal�rio final do vendedor e qual foi o pr�mio
recebido.*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, salariofinal, premio;
	int vendas;
	
	printf("Qual � o seu sal�rio ?");
	scanf("%f",&salario);
	printf("Quantas vendas voc� fez nesse mes ?");
	scanf("%d",&vendas);
	
	if(vendas > 1000 && vendas <= 5000)
		premio = 500;
	else if (vendas > 5000 && vendas <= 7500)
		premio = 700;
	else if (vendas > 7500)
		premio = 1000;
		else 
			premio = 0;
		
	salariofinal = salario + premio;
	printf("Com o seu numero de vendas total o seu salario final � %.2f, pois seu pr�mio foi de %.2f .",salariofinal,premio);
	
	printf("\nT�rmino do programa");
	return 0;
}
