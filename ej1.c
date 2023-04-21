/*
Ejercicio: Se desea hacer el siguiente cálculo: (k-n)*y/(3-r), donde k, n, r e y son enteros (int) que se ingresan por teclado. 
Se debe utilizar una función para realizar el cálculo. El resultado (float) debe imprimirse en pantalla desde el programa 
principal (main). Considerar que k debe ser mayor que n para poder hacer el cálculo y que r debe ser distinto de 3. Utilizar 
lenguaje C.
*/
#include <stdio.h>

int i, num, numero[4];
char valores[4] = {'k', 'n', 'r', 'y'};
int main(){
    for (i = 0; i < 4; i++)/*iteramos el vector numeros y valores*/
    {
        printf("Ingresar un valor numerico para la variable %c: \n", valores[i]);//se pide por consola los valores numericos
        while (scanf("%d", &numero[i]) != 1)/*Si el valor ingresado no es numerico*/
        {
            scanf("%d", &numero[i]);
            printf("Error! Ingrese solo valores numericos. \nIngresar un valor numerico para la variable %c: \n", valores[i]);
            while (getchar() != '\n') {}/*Limpiar el buffer de entrada*/
            continue;
        }
        while (numero[2] == 3)/*Si ingresa un 3 para la variable r, se pide que ingrese otro valor*/
        {
            printf("Error! \nEl numero r debe ser diferente a %d.\n", numero[2]);
            printf("Ingresar valor de %c otra vez.\n", valores[2]);
            scanf("%d", &numero[2]);
            continue;
        }
        while (numero[1]  >= numero[0])/*La variable k debe ser mayor que la variable n*/
        {
            printf("Error! \nLa variable %c debe ser menor a la %c.\n", valores[1], valores[0]);
            printf("Ingresar valor de %c otra vez.\n", valores[1]);
            scanf("%d", &numero[1]);
            continue;
        }
    }
    float calculo = (numero[0] - numero[1]) * numero[3] / (3 - numero[2]);/*se realiza calculo (k-n)*y/(3-r)*/
    printf("El resultado de (k-n)*y/(3-r) es: %.2f", calculo);
    return 0;
}