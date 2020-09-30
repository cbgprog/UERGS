/*
 * Arquivo:     exerc02.c
 * Data:        2020-09-30
 * Disciplina:  Algoritmos e Programação II - Aula 03
 * Descrição:   Implemente uma função recursiva para
                computar o valor de 2^n.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 * 
 */

#include <stdio.h>

int potencia (int expoente) {
    return expoente > 1 ? 2 * potencia(expoente - 1) : 2;
}

int main () {
    
    int expoente;
    
    printf("=== Potências ===\n");
    
    while (1) {
        printf("Digite o expoente ou 0 para encerrar: ");
        scanf("%i", &expoente);
        if (expoente == 0) {
            break;
        }
        
        printf("2^%i = %i\n", expoente, potencia(expoente));
    }
    
    printf("Até mais e obrigado pelos peixes!!\n");
    
    return 0;
}
