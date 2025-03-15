#include <stdio.h>

int main(){
    int x = 9;
    int *px = &x;

    *px = *px / 3;
    printf("%d\n", *px);
    
    return 0;
}