/*
 * Arquivo:     listaVM05.c
 * Data:        2020-09-19
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Exercício 05 da Lista Vetores e Matrizes: Crie uma
 *              matriz  5 x 5 de inteiros e posteriormente (após o
 *              preenchimentos dos elementos via teclado), escreva
 *              a localização (linha e a coluna) do maior valor.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <time.h>

#define tamanhoMatriz 3

void mostrarMatriz (int matriz[tamanhoMatriz][tamanhoMatriz],
                    int exibeMaior,
                    int linhaMaiorElemento,
                    int colunaMaiorElemento) {
    
    int x, y;
    
    for (x = 0; x < tamanhoMatriz; x++) {
        x == (int) (tamanhoMatriz / 2) ? printf("M = |") : printf("    |");
        for (y = 0; y < tamanhoMatriz; y++) {
            if (exibeMaior) {
                if (x == linhaMaiorElemento && y == colunaMaiorElemento) {
                    printf("%4i", matriz[x][y]);
                } else {
                    printf("    ");
                }
            } else {
                printf("%4i", matriz[x][y]);
            }
        }
        printf(" |\n");
    }
    
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    srand((unsigned) time(NULL));
    
    int x, y, matriz[tamanhoMatriz][tamanhoMatriz], modoPreenchimento;
    int maiorElemento, linhaMaiorElemento, colunaMaiorElemento;
    
    printf("Forma de preenchimento da matriz:\n 0 - Automático\n 1 - Manual\n");
    scanf("%i", &modoPreenchimento);
    
    for (x = 0; x < tamanhoMatriz; x++) {
        for (y = 0; y < tamanhoMatriz; y++) {
            if (modoPreenchimento) {
                printf("Digite o elemento [%i][%i]: ", x, y);
                scanf("%i", &matriz[x][y]);
                if (matriz[x][y] < -99 || matriz[x][y] > 99) {
                    printf("ERRO - Digite apenas elementos entre -99 e 99 (inclusive)\n");
                    y--;
                }
            } else {
                matriz[x][y] = rand() % 99 + 1;
            }
            if (x == 0 && y == 0) {
                maiorElemento = matriz[x][y];
                linhaMaiorElemento = x;
                colunaMaiorElemento = y;
            } else if (maiorElemento < matriz[x][y]) {
                maiorElemento = matriz[x][y];
                linhaMaiorElemento = x;
                colunaMaiorElemento = y;
            }
        }
    }
    
    printf("\nMatriz Gerada/digitada:\n\n");
    
    mostrarMatriz(matriz, 0, linhaMaiorElemento, colunaMaiorElemento);
    
    printf("\nO maior elemento está na linha %i e na coluna %i:\n\n",
        linhaMaiorElemento + 1, colunaMaiorElemento + 1);
    
    mostrarMatriz(matriz, 1, linhaMaiorElemento, colunaMaiorElemento);
    
    return 0;
}
