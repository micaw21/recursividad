#include <stdio.h>

//Variables Globales
int numero1;
int numero2;

//Prototipo de Funciones
void ingresarNumeros();
int multiplicacionRecursiva(int, int);
void mostrarProducto();

//Funcion Principal
int main() {
    ingresarNumeros();
    mostrarProducto();
    return 0;
}

//Implementacion
void ingresarNumeros() {
    printf("Ingrese un numero entero: ");
    scanf("%d",&numero1);
    printf("Ingrese un otro numero entero: ");
    scanf("%d",&numero2);
}

int multiplicacionRecursiva(int pNumero1, int pNumero2) {
    if(pNumero1 == 0 || pNumero2 == 0){
        return 0;
    } else {
        return pNumero1 + (multiplicacionRecursiva(pNumero1,(pNumero2 - 1)));
    }
}

void mostrarProducto() {
    int producto = multiplicacionRecursiva(numero1, numero2);
    printf("El producto es: %d\n",producto);
}