/*Faça um programa que simula uma calculadora que aceita as seguintes operações: soma,
subtração, divisão e multiplicação. O programa inicia pedindo para o usuário escolher uma
opção do menu:
a. Somar
b. Subtrair
c. Dividir
d. Multiplicar
e. Sair */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	int op, numero1, numero2;

    do {
        printf("\n1 - Adição\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n0 - Sair\n\n");
        scanf("%d", &op);
		if(op > 0 && op < 5){
            printf("Digite dos dois numeros: ");
            scanf("%d%d",&numero1, &numero2);
        }

        switch(op) {
        case 0:
            printf("\n\nFim Do Programa\n");
            break;
        case 1:
            printf("Adição: %d\n", numero1 + numero2);
            break;
        case 2:
            printf("Subtracao: %d\n", numero1 - numero2);
            break;
        case 3:
            printf("Multiplicação: %d\n", numero1 * numero2);
            break;
        case 4:
            while(numero2 == 0) {
                printf("Nao existe divisao por zero!\nDigite outro valor: ");
                scanf("%d", &numero2);
            }
            printf("Divisão: %d\n", numero1 / numero2);
            break;
        default:
            printf("Opcao inválida.\nDigite outra opcao: ");
        }
    } while(op != 0);
    
    return 0;
}
