#include <stdio.h>

typedef struct{
    int hora;
    int min;
}horario;

void mostrarhorario (horario *h){
    printf("Horário: %d:%d\n", h->hora, h->min);
}

int main(){
     horario meu_horario;
     horario *p = &meu_horario;

     printf("que horas são? ");
     scanf("%d:%d", &p->hora, &p->min);

    if (p ->hora < 0 || p ->hora > 24 || p ->min < 0 || p ->min > 60){
        printf("Horário inválido\n");
    return 1;
    }

    printf("seu horario esta errado. o correto é: ");
    p ->hora = (p ->hora + 1) % 24;
    mostrarhorario(p);

    return 0;
    }
