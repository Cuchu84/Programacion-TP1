#include <stdio.h>

int i, numero[4];
char valores[4] = {'k', 'n', 'r', 'y'};
int main(){
    for (i = 0; i < 4; i++)/*iteramos el vector numeros y valores*/
    {
        printf("Ingresar un valor numerico para la variable %c: \n", valores[i]);
        scanf("%d", &numero[i]);
        while (numero[2] == 3)/*Si ingresa un 3 para la variable r, se pide que ingrese otro valor*/
        {
            printf("ERROR!! \nEl numero r debe ser diferente a %d.\n", numero[2]);
            printf("Ingresar valor de %c otra vez.\n", valores[2]);
            scanf("%d", &numero[2]);
            continue;
        }
        while (numero[1]  >= numero[0])/*La variable k debe ser mayor que la variable n*/
        {
            printf("ERROR!! \nLa variable %c debe ser menor a la %c.\n", valores[1], valores[0]);
            printf("Ingresar valor de %c otra vez.\n", valores[1]);
            scanf("%d", &numero[1]);
            continue;
        }
    }
    float calculo = (numero[0] - numero[1]) * numero[3] / (3 - numero[2]);/*se realiza calculo (k-n)*y/(3-r)*/
    printf("El resultado de (k-n)*y/(3-r) es: %.2f", calculo);
    return 0;
}