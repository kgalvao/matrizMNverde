#include <stdio.h>

//função para preencher a matriz
void preencherMatriz(int matriz[][100], int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

//função para calcular a soma de cada coluna e retornar o vetor
void somaDasColunas(int matriz[][100], int vetor[], int N, int M) {
    for (int j = 0; j < M; j++) {
        vetor[j] = 0;
        for (int i = 0; i < N; i++) {
            vetor[j] += matriz[i][j];
        }
    }
}


int main() {
    int N, M;

    //leitura da matriz
    scanf("%d %d", &N, &M);

    //matriz e o vetor para armazenar as somas das colunas
    int matriz[100][100];
    int somaColunas[100];

    //matriz com os elementos fornecidos
    preencherMatriz(matriz, N, M);

    //soma das colunas
    somaDasColunas(matriz, somaColunas, N, M);

    //vetor com as somas das colunas
    for (int j = 0; j < M; j++) {
        printf("%d ", somaColunas[j]);
    }
    printf("\n");

    return 0;
}
