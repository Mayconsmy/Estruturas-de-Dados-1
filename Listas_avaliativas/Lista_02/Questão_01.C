#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char tipo[50];   
    float peso;       
    int comprimento;  
} Peixe;

int main() {
    // A - Criando uma variável do tipo Peixe
    Peixe myfish = {"Tambaqui", 1.5, 30};

    // B - Criando um ponteiro para uma variável do tipo Peixe
    Peixe *ptr = &myfish;


    printf("Tipo: %s\n", ptr->tipo);
    printf("Peso: %.2f kg\n", ptr->peso);
    printf("Comprimento: %d cm\n", ptr->comprimento);

    return 0;
}
