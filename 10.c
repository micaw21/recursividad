#include <stdio.h>
#include <string.h>

//Definicion de Tipos
typedef char tString[30];

//Variables Globales
tString palabra;

//Prototipo de Funciones
void ingresarPalabra();
int esPalindromo(tString, int, int);
void mostrarPalindromo();

//Funcion Principal
int main() {
    ingresarPalabra();
    mostrarPalindromo();
    return 0;
}

//Implementacion
void ingresarPalabra() {
    printf("Ingrese una palabra: ");
    fflush(stdin);
    gets(palabra);
}

int esPalindromo(tString pPalabra, int pInicio, int pFin){
    int lon = strlen(pPalabra);
    int inicio = 0;
    int fin = lon - 1;
    if(pPalabra[inicio] >= pPalabra[lon - 1]){
        return 1;
    } else {
        if(pPalabra[inicio] == pPalabra[lon - 1]){
            return esPalindromo(pPalabra, inicio + 1,fin - 1);
        } else {
            return 0;
        }
    }
}

void mostrarPalindromo() {
    int lon = strlen(palabra);
    int valor = esPalindromo(palabra,0,lon);
    if(valor == 1) {
        printf("Es palindromo!\n");
    } else {
        printf("No es palindromo!\n");
    }
}