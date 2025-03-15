#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;  // Ponteiro declarado, mas não inicializado (ponteiro selvagem)

    // Tentativa de acessar o conteúdo apontado pelo ponteiro
    printf("Conteúdo apontado por ptr: %d\n", *ptr);

    return 0;
}
