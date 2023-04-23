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
    printf("A = %d - B = %d\n\n", A, B);
    dif = B -A;
    for ( i = 0; i <= dif; i++)
    {
        total = A + i;
        suma = suma + total;
    }
    printf("i = %d - A = %d - dif = %d - total = %d - suma = %d\n\n", i, A, dif, total, suma);
}