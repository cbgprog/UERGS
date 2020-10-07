/*
 * Arquivo:     exerc01.c
 * Data:        2020-09-16
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Primeiro exercício da aula 01.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 * 
 */

#include <stdio.h>
#include <locale.h>

#define numElementos 4

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int vetorX[numElementos], vetorY[numElementos], x, produtoEscalar = 0;
    
    printf("Produto escalar de dois vetores.\n");

    for (x = 0; x < numElementos; x++) {
        printf("Digite o %iº valor do vetor X: ", x + 1);
        scanf("%i", &vetorX[x]);
    }
    
    for (x = 0; x < numElementos; x++) {
        printf("Digite o %iº valor do vetor Y: ", x + 1);
        scanf("%i", &vetorY[x]);
        produtoEscalar += vetorX[x] * vetorY[x];
    }
    
    printf("\nO produto escalar dos vetores X e Y é: %i\n\n", produtoEscalar);
    
    return 0;
}
