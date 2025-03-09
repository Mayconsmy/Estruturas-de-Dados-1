#include <stdio.h>
typedef struct{
    char estado[10];
    char tipo[10];
}tigela;

void fome(tigela *t){
   strcpy(t->estado, "vazia");
}

int main(){
    tigela minha_tigela;
    tigela *p = &minha_tigela;

    strcpy(p->estado, "cheia");
    strcpy(p->tipo, "canja");

    printf("Antes da janta: a tigela está %s e contém %s\n", p->estado, p->tipo);

    fome(p);

    printf("Depois da janta: a tigela está %s e contém %s\n", p->estado, p->tipo);

    return 0;
}