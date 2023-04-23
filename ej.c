#include <stdio.h>

int A, B, i, dif, suma;

int main(){
    printf("Ingrese un valor numerico para A\n");
    while (scanf("%d", &A) != 1)/*Si el valor ingresado no es numerico*/
        {
            scanf("%d", &A);
            printf("Error! Ingrese solo valores numericos. \nIngresar un valor numerico para la variable %c: \n", A);
            while (getchar() != '\n') {}/*Limpiar el buffer de entrada*/
            continue;
        }
    //scanf("%d", &A);
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
        int incremental_A;
        incremental_A = A + i;
        suma = suma + incremental_A;
    }
    printf("La suma de los numeros enteros que se encuentran entre los valores A y B es: \n\t%d", suma);
}