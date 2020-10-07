/*
 * Arquivo:     listaVM04.c
 * Data:        2020-09-19
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Exercício 04 da Lista Vetores e Matrizes: Considere um
 *              vetor de trajetórias de 9 elementos, onde cada elemento possui
 *              o valor do próximo elemento do vetor a ser lido:
 *                     Índice  1 2 3 4 5 6 7 8 9
 *                     Valor   5 7 6 9 2 8 4 0 3
 *              Assim, a seqüência da leitura seria 1, 5, 2, 7, 4, 9, 3, 6, 8, 0
 *              Faça um algoritmo que seja capaz de ler esse vetor e seguir a trajetória.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 * 
 */

#include <stdio.h>
#include <locale.h>

void mostrarVetor (int *vetor) {
    
    int x;
    
    printf("Vetor = [ ");
    
    for (x = 0; x < 9; x++) {
        x == 8 ? printf("%i ]", vetor[x]) : printf("%i, ", vetor[x]);
    }
    
    printf("\n");
    
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int trajetoria[] = {0, 0, 0, 0, 0, 0, 0, 0, 0}, valor, x = 0, posicao = 0;
    
    printf("Digite os elementos para as posições do vetor:\n");
    
    while (x < 9) {
        printf("Posição %i: ", posicao);
        scanf("%i", &valor);
        
        if (valor < 0 || valor > 8) {
            printf("ERRO - Apenas valores entre 1 e 8 são aceitos.\n");
            x--;
        } else {
            trajetoria[posicao] = valor;
            if (posicao != valor) {
                posicao = valor;
                x++;
            }
        }
        
        mostrarVetor(trajetoria);
    }
    
    return 0;
}
