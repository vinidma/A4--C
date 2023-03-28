/*O Zodíaco Chinês é composto por animais com ciclo de 12 anos. Uma maneira
simplificada de identificá-los é verificando-se apenas o ano de seu nascimento do seguinte
modo: 
a. Crie um vetor com os signos;
b. Crie um vetor com a data de aniversário dos membros de sua família;*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
    int dias[20]={1974,1975,1996,2003};
    char signos[12][10]= {"Macaco", "Galo", "Cão", "Porco", "Rato", "Boi", "Tigre", "Coelho", "Dragão", "Serpente", "Cavalo", "Carneiro"};
    
 	
    int i;
	for (i=0;i<4;i++){
		int zoo = dias[i]%12;
		
		printf("\nO numero é:\n%s\n\n", signos[zoo]);
	}



    

  
    
}
