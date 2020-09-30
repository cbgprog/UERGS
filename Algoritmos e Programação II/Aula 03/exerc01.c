/*
 * Arquivo:     exerc01.c
 * Data:        2020-09-30
 * Disciplina:  Algoritmos e Programação II - Aula 03
 * Descrição:   Primeiro exercício da Aula 03. Crie uma função recursiva
                que calcula a potência de um número.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 * 
 */

#include <stdio.h>

int potencia (int base, int expoente) {
    return expoente > 1 ? base * potencia(base, expoente - 1) : base;
}

int main () {
    
    int base, expoente;
    
    printf("=== Potências ===\n");
    
    while (1) {
        printf("Digite a base ou 0 para encerrar: ");
        scanf("%i", &base);
        if (base == 0) {
            break;
        }
        printf("Digite a expoente: ");
        scanf("%i", &expoente);
        
        printf("%i^%i = %i\n", base, expoente, potencia(base, expoente));
    }
    
    printf("Até mais e obrigado pelos peixes!!\n");
    
    return 0;
}
