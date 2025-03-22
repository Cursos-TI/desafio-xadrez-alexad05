#include <stdio.h>

// Simulação do movimento da Torre (usando recursão)
void moverTorreRecursivo(int movimentos) {
    if (movimentos > 0) {
        printf("Direita\n");
        moverTorreRecursivo(movimentos - 1);
    }
}

// Simulação do movimento do Bispo (usando recursão e loops aninhados)
void moverBispoRecursivo(int movimentos) {
    if (movimentos > 0) {
        for (int i = 0; i < 1; i++){
            printf("Cima, Direita\n");
            
        }
        moverBispoRecursivo(movimentos - 1);
    }
}

// Simulação do movimento da Rainha (usando recursão)
void moverRainhaRecursivo(int movimentos) {
    if (movimentos > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(movimentos - 1);
    }
}

// Simulação do movimento do Cavalo (usando loops complexos)
void moverCavaloLoopsComplexos() {
    printf("\n\nMovimento do Cavalo:\n");

    int movimentos_baixo = 2;
    int movimentos_esquerda = 1;

    for (int i = 0; i < movimentos_baixo; i++) {
        printf("Baixo\n");
    }

    int j = 0;
    while (j < movimentos_esquerda) {
        printf("Esquerda\n");
        j++;
    }
}

int main() {
    // Definindo o número de movimentos para cada peça
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorreRecursivo(movimentosTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(movimentosBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainhaRecursivo(movimentosRainha);

    moverCavaloLoopsComplexos();

    return 0;
}
