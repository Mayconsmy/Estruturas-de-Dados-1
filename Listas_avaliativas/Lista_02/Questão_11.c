#include <stdio.h>

typedef enum{
    JPG,
    PNG,
    BMP
} tipoimagem;

typedef struct{
    char nome[50];
    int largura;
    int altura;
    tipoimagem tipo;
} imagem;

void detalhes(imagem *i){
    const char *tipos[] = {"JPG", "PNG", "BMP"};
    printf("A imagem %s tem %d x %d pixels e é do tipo %s\n", i->nome, i->largura, i->altura, tipos[i->tipo]); 
}

int main(){

    imagem img = {"foto.jpg", 800, 600, JPG};

    detalhes(&img); 

    return 0;
}