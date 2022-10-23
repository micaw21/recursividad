#include <stdio.h>

//Variables Globales
int numero1;
int numero2;

//Prototipo de Funciones
void ingresarNumeros();
int divisionRecursiva(int, int);
void mostrarDivision();

//Funcion Principal
int main() {
    ingresarNumeros();
    mostrarDivision();
    return 0;
}

//Implementacion
void ingresarNumeros() {
    printf("Ingrese el divisor: ");
    scanf("%d",&numero1);
    while(numero1 == 0) {
        printf("\nIngrese el divisor: ");
        scanf("%d",&numero1);   
    }
    printf("Ingrese el dividendo: ");
    scanf("%d",&numero2);
    while(numero2 == 0) {
        printf("\nIngrese el dividendo: ");
        scanf("%d",&numero2);   
    }
}

int divisionRecursiva(int pDivisor, int pDividendo){
    if(pDividendo > pDivisor){
        return 0;
    } else {
        return (1 + divisionRecursiva(pDivisor-pDividendo,pDividendo));
    }
}

void mostrarDivision() {
    int resultado = divisionRecursiva(numero1,numero2);
    printf("El resultado de la division es: %d\n",resultado);
}