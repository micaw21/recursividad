#include <stdio.h>
// #include <time.h>

//Variables Globales
int valor = 0;

//Prototipo de Funciones
void ingresarValor();
void cuentaRegresiva(int);
// void delay(int);

//Funcion Principal
int main() {
    ingresarValor();
    cuentaRegresiva(valor);
    return 0;
}

//Implementacion
void ingresarValor() {
    printf("Ingrese un valor para la cuenta regresiva: ");
    scanf("%d",&valor);
}

void cuentaRegresiva(int pValor){
    if(pValor == 0){
        printf("\nEl tiempo se ha agotado!\n");
    } else {
        printf("\t%d ",pValor);
        // delay(1);
        cuentaRegresiva(pValor - 1);
    }
}

// void delay(int number_of_seconds){
//     int milli_seconds = 1000 * number_of_seconds;
//     clock_t start_time = clock();
//     while(clock() < start_time + milli_seconds);
// }