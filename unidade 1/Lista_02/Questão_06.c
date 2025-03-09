#include <stdio.h>


int main (){
    char letra = 'A';
    char *ptr = &letra;


    *ptr = 'B';


    printf("Conteudo da variavel: %c\n", letra);
    printf("Conteudo apontado pelo ponteiro: %c\n", *ptr);


    return 0;
}


// 1 - criar a variavel char 'A'.
// 2 - definir um ponteiro apontado para a variavel.
// 3 - modificar o ponteiro para 'B'.
// 4 - exibir ao usuario os conteudos exigidos.
