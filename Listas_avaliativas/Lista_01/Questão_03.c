#include <stdio.h>

int main(){
    char ch = 'A';
    char *indica = &ch;

    printf("%c\n", *indica);

    return 0;
}