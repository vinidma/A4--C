/*Escreva um programa que leia o salário fixo de um vendedor de uma loja e o valor total de
vendas efetuadas por ele no mês. Acrescente ao salário um prêmio, conforme a tabela a
seguir:
O programa deve calcular e informar o salário final do vendedor e qual foi o prêmio
recebido.*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, salariofinal, premio;
	int vendas;
	
	printf("Qual é o seu salário ?");
	scanf("%f",&salario);
	printf("Quantas vendas você fez nesse mes ?");
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
	printf("Com o seu numero de vendas total o seu salario final é %.2f, pois seu prêmio foi de %.2f .",salariofinal,premio);
	
	printf("\nTérmino do programa");
	return 0;
}
