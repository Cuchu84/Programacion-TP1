/*
Realice un programa que permita sumar los números enteros que se encuentran entre dos valores enteros que se ingresan por teclado. 
Ejemplo: Si se ingresan los valores 23 y 28, deberá devolver la suma 23+24+25+26+27+28. Algo importante es que el primer valor 
ingresado debe ser menor que el segundo valor ingresado para hacer la suma. Utilizar lenguaje C.
*/
/*
1. solicitar variables
2. a>b
3. a-b para saber cuantos numeros hay q sumar
4. iterar todos los numeros a sumar
5. sumar e imrimir
*/
#include <stdio.h>

int num[2], suma, i, dif;
char var[2] = {'a', 'b'};

int main(){
    for ( i = 0; i < 2; i++)
    {
        printf("Ingrese un valor nuerico para la variable %c\n", var[i]);
        scanf("%d", &num[i]);
        
    }
    printf("Usted escogio:\n");
    for ( i = 0; i < 2; i++)
    {
        printf("variable: %c - valor: %d\n", var[i], num[i]);
    }
    dif = num[0] - num[1];
    printf("la dif es %d\n", dif);
}