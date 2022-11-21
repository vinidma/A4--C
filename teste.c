#include <stdio.h>
#include <math.h>
#include <string.h>

main()
{

    int v=6;
    int c1=0; 
    int c2=0; 
    int c3=0; 
    int c4=0; 
    int c5=0;
    int maior;
    int menor;
    printf("Pesquisa Niterói");

    while(v!=0)
    {
        printf("\n\n 1-Flamengo\n 2-Vasco\n 3-Fluminense\n 4-Botafogo\n 5-Outros");
        printf("\nDigite o numero do seu clube de futebol de preferencia e aperte enter: ");
        scanf("%i", &v);

        switch(v)
        {
            case 0:
                printf("\n votaçao encerrada!");
                break;

            case 1:
            c1= c1+1;
                printf("Antonio - Voto registrado!");
                break;

            case 2:
            c2= c2+1;
                printf("Jose - Voto registrado!");
                break;

              case 3:
            c3= c3+1;
                printf("Maria - Voto registrado!");
                break;

            case 4:
            c4= c4+1;
                printf("Branco - Voto registrado!");
                break;

            case 5:
            c5= c5+1;
                printf("Nulo - Voto registrado!");
                break;

        }

        switch
    }


    printf("Resultados:%i\n Antonio\t %i\n Jose\t %i\n Maria\t %i\n Branco\t %i\n Nulo\t %i", v,c1, c2, c3, c4, c5);
    printf("\n\nO numero total de eleitores foi %i", c1+c2+c3+c4+c5);

    if((c1>c2)&&(c1>c3)){
        printf("\nAntonio eh o novo ganhador\n");
}
    else if((c2>c1)&&(c2>c3)){
        printf("\nJose eh o novo ganahdor\n");
    }
    else if((c3>c1)&&(c3>c2)){
        printf("\nMaria eh a nova ganhadora\n");
    }



getchar();
printf("\n\n");
return(0);
return 0;
}
