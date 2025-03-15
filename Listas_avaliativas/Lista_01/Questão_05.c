#include <stdio.h>

int main(){
    int x=68, y;
    int *p;

    p = &x;
    y = *p + 200;

    printf("Y = %d\n", y);

    return 0;
}