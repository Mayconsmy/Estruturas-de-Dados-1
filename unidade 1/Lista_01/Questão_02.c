#include <stdio.h>

int main(){
    int valor = 18;
    int *prtvalor = &valor;

    printf("\nO valor : %d", valor);
    printf("\nO endereço desse valor: %p", (void *) prtvalor);

    return 0;
}