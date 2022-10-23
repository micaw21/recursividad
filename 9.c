#include <stdio.h>

//Variables Globales
int numero;

//Prototipo de Funciones
void ingresarNumero();
int sumaEnteros(int);
void mostrarSuma();

//Funcion Principal
int main() {
    ingresarNumero();
    mostrarSuma();
    return 0;
}

//Implementacion
void ingresarNumero() {
    printf("Ingrese un numero entero: ");
    scanf("%d",&numero);
}

int sumaEnteros(int pNumero){
    if(pNumero == 0) {
        return pNumero;
    } else {
        return pNumero + sumaEnteros(pNumero-1);
    }
}

void mostrarSuma() {
    int suma = sumaEnteros(numero);
    printf("La suma es de: %d\n",suma);
    
}