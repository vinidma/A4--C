/*O Zod�aco Chin�s � composto por animais com ciclo de 12 anos. Uma maneira
simplificada de identific�-los � verificando-se apenas o ano de seu nascimento do seguinte
modo: 
a. Crie um vetor com os signos;
b. Crie um vetor com a data de anivers�rio dos membros de sua fam�lia;*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
    int dias[20]={1974,1975,1996,2003};
    char signos[12][10]= {"Macaco", "Galo", "C�o", "Porco", "Rato", "Boi", "Tigre", "Coelho", "Drag�o", "Serpente", "Cavalo", "Carneiro"};
    
 	
    int i;
	for (i=0;i<4;i++){
		int zoo = dias[i]%12;
		
		printf("\nO numero �:\n%s\n\n", signos[zoo]);
	}



    

  
    
}
