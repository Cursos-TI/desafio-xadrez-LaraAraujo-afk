#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a direita (usando for)
    int torreMove= 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= torreMove; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita (usando while)
    int bispoMove = 5;
    int i = 1;
    printf("\nMovimento do Bispo:\n");
    while (i <= bispoMove) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha - 8 casas para a esquerda (usando do-while)
    int rainhaMove = 8;
    int j = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= rainhaMove);

    return 0;
}

