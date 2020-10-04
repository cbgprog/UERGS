/*
 * Arquivo:     listaVM03.c
 * Data:        2020-09-19
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Exercício 03 da Lista Vetores e Matrizes: Crie um vetor
 *              de 15 posições de inteiros e posteriormente realize a
 *              compactação dele, isto é, elimine as posições com valor
 *              zero avançando uma posição, com os com os valores
 *              subseqüentes do vetor. Dessa forma todos “zeros” devem
 *              ficar para as posições finais do vetor.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <time.h>

#define tamanhoVetor 15

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int x, y, vetor[tamanhoVetor], valor, temp;
    
    srand( (unsigned) time(NULL));
    
    for (x = 0; x < tamanhoVetor; x++) {
        valor = rand() % 100;
        vetor[x] = valor > 40 ? valor : 0; // Valores aleatórios entre 0 e 100
    }
    
    printf("Vetor gerado aleatóriamente:\nv = [ ");
    
    for (x = 0; x < tamanhoVetor; x++) {
		printf("%i", vetor[x]);
		x == tamanhoVetor - 1 ? printf(" ]\n") : printf(", ");
	}
    
    /*  Movendo elementos "zerados" para o final
     *  usando uma adaptação do algoritmo da bolha(ordenação):
     */
    
    for (x = 0; x < tamanhoVetor; x++) {
        for (y = 0; y < tamanhoVetor - 1; y++) {
		    if (vetor[y] == 0) {
		        temp = vetor[y + 1];
		        vetor[y + 1] = vetor[y];
		        vetor[y] = temp;
		    }
	    }
    }
    
    printf("Vetor compactado:\nv = [ ");
    
    for (x = 0; x < tamanhoVetor; x++) {
		printf("%i", vetor[x]);
		x == tamanhoVetor - 1 ? printf(" ]\n") : printf(", ");
	}
    
    return 0;
}
