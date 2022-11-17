#include<stdio.h>
#include<locale.h>
#include<math.h>
int main (){
    setlocale(LC_ALL,"Portuguese");
    const float PI = 3.1415;
    
    int lado1, lado2, raio1, ret, circ, areaoc;
    lado1 = 5;
    lado2 = 7;
    raio1 = 2;
    ret = lado1 * lado2;
    circ = raio1 * pow (PI, 2);
    areaoc = ret - circ;
    
    printf("A área do retângulo que não está sendo ocupada pelo círculo é: %d", areaoc);

}
