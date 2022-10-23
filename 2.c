#include <stdio.h>

//Variables Globales
int valor = 0;

//Prototipo de Funciones
void ingresarValor();
void verEnBinario(int);

//Funcion Principal
int main() {
    int respuesta = 0;
    do {
        ingresarValor();
        verEnBinario(valor);
        printf("\n\nDesea ver otro numero? 1-Si 2-No: ");
        scanf("%d",&respuesta);
    } while (respuesta == 1);
    return 0;
}

//Implementacion
void ingresarValor() {
    printf("Ingrese un valor: ");
    scanf("%d",&valor);
}

void verEnBinario(int pValor) {
    if(pValor < 2){
        printf("%d",pValor);
    } else {
        verEnBinario(pValor/2);
        printf("%d",pValor % 2);
    }
}