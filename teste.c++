#include <iostream>  // Biblioteca padrão para entrada e saída (cout, cin)
#include <cstdlib>    // Biblioteca para funções de alocação dinâmica (malloc, free)

int main() {
    // Aloca dinamicamente memória para um inteiro
    int* p = (int*)std::malloc(sizeof(int));
    
    // Verifica se a alocação foi bem-sucedida
    if (p == NULL) {  
        std::cout << "Falha na alocação de memória." << std::endl;
        return 1;  // Sai do programa com código de erro
    }
    
    // Atribui o valor 30 ao espaço de memória alocado
    *p = 30;
    // Exibe o valor armazenado na memória apontada por 'p'
    std::cout << *p << std::endl;

    // Libera a memória alocada para evitar vazamento de memória
    std::free(p);

    // Realoca memória para outro inteiro
    p = (int*)std::malloc(sizeof(int));
    
    // Verifica novamente se a alocação foi bem-sucedida
    if (p == NULL) {
        std::cout << "Falha na alocação de memória." << std::endl;
        return 1;
    }
    
    // Atribui o valor 50 ao novo espaço de memória alocado
    *p = 50;
    // Exibe o valor armazenado
    std::cout << *p << std::endl;

    // Libera a memória alocada novamente
    std::free(p);

    return 0;  // Finaliza o programa com código de sucesso
}
