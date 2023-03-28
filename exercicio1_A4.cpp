/*Um círculo de raio 2 é colocando dentro de um retângulo de lados 5 e 7. Faça um
programa que informe o tamanho da área do retângulo que não está sendo ocupada pelo
círculo*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

int main(){
	setlocale(LC_ALL, "Portuguese");
	float areaCirculo,areaRetangulo,areaNaoOcupada;
	
	areaCirculo = PI * pow(2,2);
	areaRetangulo = 5 * 7;
	areaNaoOcupada = areaRetangulo - areaCirculo;
	
	printf("A área não ocupada é : %.2f",areaNaoOcupada);
	
	printf("\nTérmino do programa.");
	return 0;
}
