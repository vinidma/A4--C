/*Uma sorveteria vende cinco produtos diferentes, cada um com um preço de acordo com a
tabela abaixo: 
Faça um programa que processe diversas vendas, lembrando que cada venda efetuada
pode ser composta por diversas unidades de diversos produtos. O programa deverá utilizar:
a. uma função que apresente na tela um menu indicando os preços dos produtos.
Esse menu deve ser apresentado no início de cada venda;
b. uma função que processe cada venda individual e forneça o valor a pagar;
c. uma terceira função que emita um relatório no final do dia, informando dados gerais
das vendas do dia (número total de itens vendidos de cada produto, total pago para
cada produto, total arrecadado e valor médio de cada compra).*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define Refrigerante 3.5
#define CasquinhaS 4
#define CasquinhaD 5.5
#define Sundae 7.5
#define BananaS 9.0
void mostrarmenu(void);
void relatoriofinal(int,float);
float novavenda(void);
float valorpago_refrigerante, valorpago_casquinhas, valorpago_casquinhad, valorpago_sundae, valorpago_bananas;
int quantidade_refrigerante, quantidade_casquinhas, quantidade_casquinhad, quantidade_sundae, quantidade_bananas;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao, contadorvendas;
	float valorvenda, valorfinal;
	do{
		printf("[1]Nova venda\n[2]Fim\n");
		scanf("%d", &opcao);
		switch(opcao){
		    case 1:
		        valorvenda = novavenda();
				printf("\nO valor total da sua compra foi de : %.2f R$\n\n",valorvenda);
				valorfinal = valorfinal + valorvenda;
				contadorvendas++;
				break;
		    case 2:
		        relatoriofinal(contadorvendas,valorfinal);
		        break;
		    default:
		        printf("Opção inválida");
				break;
		}
    }while(opcao != 2);
}
//função Mostrar o menu
void mostrarmenu(){
	printf("\n[1] Refrigerante - 3,50\n[2] Casquinha Simples - 4,00\n[3] Casquinha Dupla - 5,50\n[4] Sundae - 7,50\n[5] Banana Split - 9,00");
}
//função Nova Venda
float novavenda(){
	int codigo;
	float total = 0;
	mostrarmenu();
	do{
		printf("\nDigite o código do seu produto : (Digite 0 caso queira finalizar a compra)\n");
		scanf("%d", &codigo);
		switch (codigo){
			case 0 :
				printf("Fim da compra");
				break;
			case 1:
				total = total + Refrigerante;
				quantidade_refrigerante++;
				valorpago_refrigerante = valorpago_refrigerante + Refrigerante;
				break;
			case 2: 
				total = total + CasquinhaS;
				quantidade_casquinhas++;
				valorpago_casquinhas = valorpago_casquinhas + CasquinhaS;
				break;
			case 3:
				total = total + CasquinhaD;
				quantidade_casquinhad++;
				valorpago_casquinhad = valorpago_casquinhad + CasquinhaD;
				break;
			case 4:
				total = total + Sundae;
				quantidade_sundae++;
				valorpago_sundae = valorpago_sundae + Sundae;
				break;
			case 5:
				total = total + BananaS;
				quantidade_bananas++;
				valorpago_bananas = valorpago_bananas + BananaS;
				break;
			default:
				printf("Opção inválida");
				break;
		}
		
	}while(codigo != 0);
	return total;
}
//função Relátorio do dia
void relatoriofinal(int val1, float val2){
	float media; 
	media = val2/val1;
	printf("\nO valor medio arrecadado foi de %.2f",media);
	printf("\nO valor total arrecadado foi de %.2f",val2);
	printf("\n\n%d Refrigerantes comprados - %.2f R$", quantidade_refrigerante, valorpago_refrigerante);
	printf("\n%d Casquinhas Simples compradas - %.2f R$", quantidade_casquinhas, valorpago_casquinhas);
	printf("\n%d Casquinhas Duplas compradas - %.2f R$", quantidade_casquinhad, valorpago_casquinhad);
	printf("\n%d Sundae comprados - %.2f R$", quantidade_sundae, valorpago_sundae);
	printf("\n%d Bananas Split comprados - %.2f R$", quantidade_bananas, valorpago_bananas);
}
