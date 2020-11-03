/*
 * Arquivo:     revisaoPratica01.c
 * Data:        2020-10-31
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Elabore um programa que armazene valores em um vetor de 
 *              inteiros com 10 posições e inicie cada elemento com o valor 
 *              de 1 a 10. Codifique uma função recursiva  que imprima 
 *              todos os elementos em ordem e uma função recursava que 
 *              imprima todos os elementos na ordem inversa. 
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 *
 */


#include <stdio.h>
#include <locale.h>

void imprimeEmOrdem (int posicao, int vetor[10]) {
    
    printf("%i ", vetor[posicao]);
    
    if (posicao++ < 9) {
        imprimeEmOrdem(posicao, vetor);
    }
}

void imprimeEmOrdemInversa (int posicao, int vetor[10]) {
    
    printf("%i ", vetor[posicao]);
    
    if (posicao-- > 0) {
        imprimeEmOrdemInversa(posicao, vetor);
    }
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("Vetor em ordem crescente:\n\t");
    imprimeEmOrdem(0, vetor);
    printf("\n");
    printf("Vetor em ordem decrescente:\n\t");
    imprimeEmOrdemInversa(9, vetor);
    printf("\n");
    
    return 0;
}

