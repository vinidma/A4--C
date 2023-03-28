/*Fa�a um programa que preenche um vetor de 50 posi��es com valores aleat�rios entre 0 e
20 e encontre:
a. a soma dos valores armazenados no vetor;
b. o n�mero de ocorr�ncias do valor 9;
c. o maior valor armazenado no vetor;
d. as posi��es onde aparecem o maior valor encontrado em (c) � notar que aqui o
programa possivelmente imprimir� mais de uma posi��o.*/
#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
 	setlocale(LC_ALL,"Portuguese");
	int valor[50], i, soma=0, n=20, pos, maior, cont9=0;
//Forma os numeros aleatorios, e calcula eles
 	for(i=0; i<50; i++){
	 	valor[i]=rand()%n;
	 	soma=soma+valor[i];
	}
//Apresenta os numeros aleatorios	
 	for(i=0; i<50; i++){
	 	printf("vet[%d]=%d\n",i, valor[i]);
 	}
//Le o maior valor e a sua posi��o
	maior = valor[0];
	pos = 0;
 	for(i=0; i<50; i++){
	 	if(valor[i] > maior){
	 		maior = valor[i];
	 		pos = i;
		 }
 	}
//Ve o numero de ocorrencias do 9 no vetor
	for(i=0; i<50; i++){
	 	if(valor[i] == 9)
	 		cont9++;
 	}
 	printf("A soma vale: %d", soma);
	printf("\nO maior valor � o %d na posi��o %d", maior, pos);
	printf("\nO numero 9 aparece %d vezes no programa",cont9);
 	getch();
} 

