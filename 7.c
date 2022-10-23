#include  <stdio.h>
#define MAX 5

//Definicion de Tipos
typedef int tVector[MAX];

//Variables Globales
tVector array;

//Prototipo de Funciones
void cargarVector();
int sumaVec(tVector, int);
void mostrarSuma();

//Funcion Principal
int main() {
    cargarVector();
    mostrarSuma();
    return 0;
}

//Implementacion
void cargarVector() {
    int i;
    printf("Ingresar valores para el vector: ");
    for(i=0;i<MAX;i++){
        scanf("%d",&array[i]);
    }
}

int sumaVec(tVector pVector, int pDim){
    if(pDim == 0){
        return 0;
    } else {
        return sumaVec(pVector, pDim - 1) + pVector[pDim];
    }
}

void mostrarSuma() {
    int resultado = sumaVec(array,MAX);
    printf("La suma es: %d",resultado);
}