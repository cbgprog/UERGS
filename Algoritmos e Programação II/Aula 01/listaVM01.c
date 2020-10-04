/*
 * Arquivo:     listaVM01.c
 * Data:        2020-09-19
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Primeiro exercício da Lista Vetores e Matrizes: Crie um vetor
 *              de 16 posições de inteiros (receba os valores pelo teclado para
 *              serem armazenados). Posteriormente, troque os 8 primeiros valores
 *              pelos 8 últimos e vice-e-versa. Escreva ao final o vetor obtido.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 * 
 */

#include <stdio.h>
#include <locale.h>

/* Obs. O algoritmo foi pensados apenas para vetores
 *      onde tamanhoVetor é um número par:
 */

#define tamanhoVetor 8

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int x, y, vetor[tamanhoVetor], temp;
    
    printf("\nDigite %i números para o vetor:\n", tamanhoVetor);
    
    for (x = 0; x < tamanhoVetor; x++) {
        printf("Digite o %iº número: ", x + 1);
        scanf("%i", &vetor[x]);
    }
    
    // Exibindo na tela o vetor digitado pelo usuário:
    
    printf("\nVetor digitado:\nv = [ ");
    
    for (x = 0; x < tamanhoVetor; x++) {
		printf("%i", vetor[x]);
		x == tamanhoVetor - 1 ? printf(" ]") : printf(", ");
		}
	
	printf("\n\n");
    
    // Trocando as posições dos elementos do vetor:
    
    for (x = 0; x < tamanhoVetor / 2; x++) {
        temp = vetor[x];
        vetor[x] = vetor[x + tamanhoVetor / 2];
        vetor[x + tamanhoVetor / 2] = temp;
    }
    
    // Exibindo na tela o vetor com as posições trocadas:
    
    printf("Vetor com posições trocadas:\nv = [ ");
    
    for (x = 0; x < tamanhoVetor; x++) {
		printf("%i", vetor[x]);
		x == tamanhoVetor - 1 ? printf(" ]") : printf(", ");
		}
	
	printf("\n\n");
    
    return 0;
}
