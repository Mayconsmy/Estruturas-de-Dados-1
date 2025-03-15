#include <stdio.h>
void ordenar(int *vet, int tamanho){
    int i, j, temp;
    for(i=0; i<tamanho; i++){
        for(j=i+1; j<tamanho; j++){
            if(*(vet+i) > *(vet+j)){
                temp = *(vet+i);
                *(vet+i) = *(vet+j);
                *(vet+j) = temp;
            }
        }
    }
}

void combinareordenar(int *v1, int *v2, int *v3, int tamanho){
    int resultado[10], i;

    for(i=0; i<tamanho; i++){
        *(resultado+i) = *(v1+i);
        *(resultado+i+tamanho) = *(v2+i);
    }

    ordenar(resultado, 2*tamanho);

    for(i=0; i<2*tamanho; i++){
        *(v3+i) = *(resultado+i);
    }
}

int main(){
    int vetor1[5] = {1, 3, 5, 7, 9};
    int vetor2[5] = {2, 4, 6, 8, 10};

    combinareordenar(vetor1, vetor2, 5);

    return 0;
}