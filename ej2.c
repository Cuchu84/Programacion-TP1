/*
Realice un programa que permita sumar los números enteros que se encuentran entre dos valores enteros que se ingresan por teclado. 
Ejemplo: Si se ingresan los valores 23 y 28, deberá devolver la suma 23+24+25+26+27+28. Algo importante es que el primer valor 
ingresado debe ser menor que el segundo valor ingresado para hacer la suma. Utilizar lenguaje C.
*/
/*
1. solicitar variables
2. a<b
3. a-b para saber cuantos numeros hay q sumar
4. iterar todos los numeros a sumar
5. sumar e imrimir
*/
#include <stdio.h>

int A, B, i, dif, total, suma;

int main(){
    printf("Ingrese un valor numerico para A\n");
    scanf("%d", &A);
    printf("Ingrese un valor numerico para B\n");
    scanf("%d", &B);
    while (A >= B)
    {
        printf("Error!\n");
        printf("El valor de B debe ser mayor al de A \nIngrese un nuevo valor para B\n");
        scanf("%d", &B);
    }
    dif = B -A;
    for ( i = 0; i <= dif; i++)
    {
        total = A + i;
        suma = suma + total;
    }
    printf("La suma de los numeros enteros que se encuentran entre los valores A y B es: \n\t%d", suma);
}