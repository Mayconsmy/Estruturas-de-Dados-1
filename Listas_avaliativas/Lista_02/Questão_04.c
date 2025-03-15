#include <stdio.h>

void mais (int *num){
    (*num)++;
}

int imcrementar(int num){
    return num + 1;
}

int main(){

    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    mais(&valor);
    printf("Valor incrementado: %d\n", valor);

    valor = imcrementar(valor);
    printf("Valor incrementado: %d\n", valor);

    return 0;
}