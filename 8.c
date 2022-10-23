#include <stdio.h>

//Variables Globales
int base;
int exponente;

//Prototipo de Funciones
void ingresarNumeros();
int potenciaRecursiva(int, int);
void mostrarPotencia();

//Funcion Principal
int main() {
    ingresarNumeros();
    mostrarPotencia();
    return 0;
}

//Implementacion
void ingresarNumeros() {
    printf("Ingrese la base de la potencia: ");
    scanf("%d",&base);
    printf("Ingrese el exponente de la potencia: ");
    scanf("%d",&exponente);
}

int potenciaRecursiva(int pBase, int pExponente){
    if(pExponente == 0) {
        return 1;
    } else {
        return (pBase * (potenciaRecursiva(pBase,pExponente-1)));
    }
}

void mostrarPotencia() {
    int potencia = potenciaRecursiva(base, exponente);
    printf("La potencia es de: %d\n",potencia);
}