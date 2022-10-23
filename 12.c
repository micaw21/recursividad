#include <stdio.h>

//Variables Globales
int numero;

//Prototipo de Funciones
void ingresarNumero();
int fibonacciRecursivo(int);
void mostrarFibonacci();

//Funcion Principal
int main() {
    ingresarNumero();
    mostrarFibonacci();
    return 0;
}

//Implementacion
void ingresarNumero() {
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
}

int fibonacciRecursivo(int pNum){
    int resultado;
    if(pNum == 0 || pNum ==  1){
        return pNum;
    } else {
        resultado = (fibonacciRecursivo(pNum - 1) + fibonacciRecursivo (pNum - 2));
        
    }
    return resultado;
}

void mostrarFibonacci(){
    int i;
    printf("\n\t*** FIBONACCI ***\n");
    for(i=0;i<=numero;i++){
        printf("\t%d ",fibonacciRecursivo(i));
    }
}

