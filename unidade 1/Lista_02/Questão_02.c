#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char tipo[50];   
    float peso;       
    int comprimento;  
} Peixe;

// A - Função que recebe um Peixe (por valor)
void fish(Peixe p) {
    printf("Exibindo peixe (por valor):\n");
    printf("Tipo: %s\n", p.tipo);
    printf("Peso: %.2f kg\n", p.peso);
    printf("Comprimento: %d cm\n\n", p.comprimento);
}

// B - Função que recebe um ponteiro para Peixe
void fishPtr(Peixe *p) {
    printf("Exibindo peixe (por ponteiro):\n");
    printf("Tipo: %s\n", p->tipo);
    printf("Peso: %.2f kg\n", p->peso);
    printf("Comprimento: %d cm\n\n", p->comprimento);
}

int main() {

    Peixe myfish = {"Tambaqui", 1.5, 30};

    fish(myfish);

    fishPtr(&myfish);

    return 0;
}
