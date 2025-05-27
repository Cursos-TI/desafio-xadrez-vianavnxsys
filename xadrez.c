#include <stdio.h>

int main() {
    // Movimento de outras peças 
    // printf("Cima\n");
    // printf("Direita\n");
    // (exemplo omitido)

    // Separador de movimentos
    printf("\n");

    // Movimento do Cavalo em "L"
    // 2 casas para baixo
    int casasParaBaixo = 2;
    int casasParaEsquerda = 1;

    // Loop for para mover para baixo
    for (int i = 0; i < casasParaBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop while para mover para esquerda
    int contadorEsquerda = 0;
    while (contadorEsquerda < casasParaEsquerda) {
        printf("Esquerda\n");
        contadorEsquerda++;
    }

    return 0;
}
