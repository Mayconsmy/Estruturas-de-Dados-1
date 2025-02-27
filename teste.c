#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "portuguese");

    int *p = (int *)malloc(sizeof(int));
    if (p == NULL) {
        printf("Falha na alocacao de memoria.");
        return 1;
    }
    *p = 30;
    printf("%d", *p);
    free(p);
    
    p = (int *)malloc(sizeof(int));
    if(p == NULL) {
        printf("Falha na alocacao de memoria.");
        return 1;
    }
    *p = 50;
    printf("%d", *p);
    free(p);

    return (0);
}