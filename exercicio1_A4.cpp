/*Um c�rculo de raio 2 � colocando dentro de um ret�ngulo de lados 5 e 7. Fa�a um
programa que informe o tamanho da �rea do ret�ngulo que n�o est� sendo ocupada pelo
c�rculo*/
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
	
	printf("A �rea n�o ocupada � : %.2f",areaNaoOcupada);
	
	printf("\nT�rmino do programa.");
	return 0;
}
