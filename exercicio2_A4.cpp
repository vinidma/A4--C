/*. Desenvolva um programa que recebe o número de cadastro (inteiro) de três clientes de
uma loja e o valor (em reais) que cada um desses clientes pagou por sua compra. O
programa deverá informar:
a. o valor total pago pelos três clientes;
b. o valor da compra média efetuada;
c. o número de cadastro dos clientes que efetuaram compras superiores a R$ 100,00;
d. quantos clientes efetuaram compras inferiores a RS 50,00*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cadastrocliente1, cadastrocliente2, cadastrocliente3, mais100, menos50 = 0 ;
	float valorpago1, valorpago2, valorpago3, valorfinal, valormedia;
	
	printf("Qual o cadastro do primeiro cliente ? ");
	scanf("%d", &cadastrocliente1);
	printf("Qual foi o valor pago pelo cliente ? ");
	scanf("%f", &valorpago1);
	printf("Qual o cadastro do segundo cliente ? ");
	scanf("%d", &cadastrocliente2);
	printf("Qual foi o valor pago pelo cliente ? ");
	scanf("%f", &valorpago2);
	printf("Qual o cadastro do terceiro cliente ? ");
	scanf("%d", &cadastrocliente3);
	printf("Qual foi o valor pago pelo cliente ? ");
	scanf("%f", &valorpago3);
	
	valorfinal = valorpago1 + valorpago2 + valorpago3;
	valormedia = (valorpago1 + valorpago2 + valorpago3)/3;
	
	if(valorpago1 > 100)
		mais100++;
	else if(valorpago1 <= 49)
		menos50++;
	if(valorpago2 > 100)
		mais100++;
	else if(valorpago2 <= 49)
		menos50++;
	if(valorpago3 > 100)
		mais100++;
	else if(valorpago3 <= 49)
		menos50++;
	
	printf("\n\nO valor total pago pelos três clientes foi de %.2f",valorfinal);
	printf("\nO valor medio da compra dos três clientes foi de %.2f",valormedia);
	printf("\nO numero de clientes que pagaram mais de 100 foi de %d", mais100);
	printf("\nO numero de cliente que pagaram menos de 50 foi de %d", menos50);
	
	printf("\n\nTérmino do programa.");
	return 0;
}

