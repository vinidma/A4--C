/*Fa�a uma fun��o que recebe como par�metro de entrada um vetor de tamanho qualquer,
e retorna como resultado o vetor invertido. Exemplo: ao receber como entrada o vetor v =
[3, 5, 7, 9], a fun��o deve retornar o vetor x = [9, 7, 5, 3]*/
#include <stdio.h>
#define LIM 500
void invercao(int);

int main(){
	int n;

	printf("Entre com a quantidade de numeros: ");
	scanf("%d", &n);
	printf("Entre com %d numeros: ",n);
	
	invercao(n);
	
	printf("\nFim do Programa");
	return 0;
}
//Fun��o para inverter
void invercao(int val1){
	int i, vet[LIM];
	for(i = 0; i < val1; i++){
		scanf("%d", &vet[i]);
	}
	printf("Ordem inversa: ");
	for(i = val1-1; i >= 0; i--){
		printf("%d ",vet[i]);
	}
}
