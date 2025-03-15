#include <stdio.h>

int main(){
    
    int valor = 10, *temp, soma = 0;
    temp = &valor;
    *temp = 20;
    temp = &soma;
    *temp = valor;
    printf("valor = %d, *temp = %d, soma = %d\n", valor, *temp, soma);

    return 0;
}