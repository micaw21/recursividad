#include <stdio.h>

//Variables Globales
int numero = 0;

//Prototipo de Funciones
void ingresarNumero();
void invertirNumero(int);

//Funcion Principal
int main() {
    ingresarNumero();
    invertirNumero(numero);
    return 0;
}

//Implementacion
void ingresarNumero() {
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
}

void invertirNumero(int pNumero){
    if(pNumero < 10){
        printf("%d",pNumero);
    } else {
        printf("%d",pNumero % 10);
        invertirNumero(pNumero / 10);
    }
}