#include <stdio.h>
typedef union{
    struct{
        unsigned char r; // - Red
        unsigned char g; // - Green
        unsigned char b; // - Blue
        unsigned char a; // - Alpha 
    };  
    unsigned int cor32;
} cor;

void lercor(cor *c){
    printf("Digite o valor de red (0 - 255): ");
    scanf("%hhu", &c->r);
    printf("Digite o valor de green (0 - 255): ");
    scanf("%hhu", &c->g);
    printf("Digite o valor de blue (0 - 255): ");
    scanf("%hhu", &c->b);
    printf("Digite o valor de alpha (0 - 255): ");
    scanf("%hhu", &c->a);
}
void lercor32bits (cor *c){
    printf("Digite o valor de cor32 (0 - 4294967295): ");
    scanf("%u", &c->cor32);
}
int main(){
    cor minhacor;
    lercor(&minhacor);
    printf("cor em formato RGBA: R=%u G=%u B=%u A=%u\n", minhacor.r, minhacor.g, minhacor.b, minhacor.a);  
    lercor32bits(&minhacor);
    printf("cor em formato 32 bits: %u\n", minhacor.cor32);
    return 0;     
}