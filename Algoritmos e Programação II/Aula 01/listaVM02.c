/*
 * Arquivo:     listaVM02.c
 * Data:        2020-09-19
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Exercício 02 da Lista Vetores e Matrizes: Crie um vetor
 *              de 20 posições de inteiros.  Após o vetor estar todo preenchido
 *              com valores informados pelo teclado, solicite ao usuário a
 *              informação de um número, o qual será procurado no vetor. Se o valor
 *              for encontrado informe em que posição ele se encontra (a primeira,
 *              caso ele esteja armazenado em mais de uma posição). Utilize mensagem
 *              adequada para o caso do valor não estar armazenado no vetor.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 * 
 */

#include <stdio.h>
#include <locale.h>

#define tamanhoVetor 20

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[tamanhoVetor], x, posicao = 0, valor;
    
    printf("\nDigite %i elementos para o vetor:\n\n", tamanhoVetor);
    
    for (x = 0; x < tamanhoVetor; x++) {
        printf("Digite o %2i elemento: ", x + 1);
        scanf("%i", &vetor[x]);
    }
    
    printf("\nDigite um valor para buscar no vetor: ");
    scanf("%i", &valor);
    
    x = tamanhoVetor - 1;
    
    while (x--) {
        if (vetor[x] == valor) {
            posicao = x;
            x = 0;
        }
    }
    
    if (posicao) {
        printf("\nElemento encontrado na posição %i.\n\n", posicao + 1);
    } else {
        printf("\nO elemento não faz parte do vetor.\n\n");
    }
    
    return 0;
}
