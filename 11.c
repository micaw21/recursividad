#include <stdio.h>

//Variables Globales
int numero;

//Prototipo de Funciones
void ingresarNumero();
int factorialRecursivo(int);
void mostrarFactorial();

//Funcion Principal
int main() {
    ingresarNumero();
    mostrarFactorial();
    return 0;
}

//Implementacion 
void ingresarNumero() {
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
}

int factorialRecursivo(int pNum) {
    if(pNum == 0) {
        return 1;
    } else {
        return factorialRecursivo(pNum - 1) * pNum;
    }
}

void mostrarFactorial() {
    int factorial = factorialRecursivo(numero);
    printf("El factorial de %d es %d\n",numero,factorial);
}