/*
 * Arquivo:     revisaoPratica01.c
 * Data:        2020-10-31
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os
 *              endereços de duas variáveis inteiras, digamos min e max, e deposite
 *              nessas variáveis o valor de um elemento mínimo e o valor de um
 *              elemento máximo do vetor. Escreva também uma função
 *              main que use a função mm. 
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 *
 */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void maximoEMinimo (int *vetor, int tamanho, int *maximo, int *minimo) {
    
    int x;
    
    *maximo = vetor[0];
    *minimo = vetor[0];
    
    for (x = 0; x < tamanho; x++) {
        *maximo = vetor[x] > *maximo ? vetor[x] : *maximo;
        *minimo = vetor[x] < *minimo ? vetor[x] : *minimo;
    }
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    srand((unsigned) time(NULL));

    int *vetor, maximo, minimo, tamanho, x;
    
    printf("Digite o tamanho desejado para o vetor: ");
    scanf("%i", &tamanho);
    
    vetor = (int *) malloc(tamanho * sizeof(int));
    
    printf("Vetor gerado automaticamente:\n V = [");
    
    for (x = 0; x < tamanho; x++) {
        vetor[x] = (int) rand() % 100 - 50;
        printf("%3i", vetor[x]);
        x == tamanho - 1 ? printf(" ]\n"): printf(", ");
    }
    
    maximoEMinimo(vetor, tamanho, &maximo, &minimo);
    
    printf("Maior valor: %i\n", maximo);
    printf("Menor valor: %i\n", minimo);

    return 0;
}


