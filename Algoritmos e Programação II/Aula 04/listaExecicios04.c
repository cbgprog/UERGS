/*
 * Arquivo:     listaExercicios04.c
 * Data:        2020-10-07
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Faça um programa que leia 3 números inteiros obrigatoriamente com três
 *              dígitos e depois utilizando uma função imprima o número lido de forma
 *              invertida (os números que foram passados por parâmetro). Ex: 234 saída: 432
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 *
 */


#include <stdio.h>
#include <locale.h>

void digitosInvertidos(int numeros[]) {
    int x = 3, numeroInvertido;
    
    printf("Digitos invertidos:\n");
    
    while (x--) {
        numeroInvertido = 0;
        while (numeros[x] > 0) {
            numeroInvertido = 10 * numeroInvertido + numeros[x] % 10;
            numeros[x] /= 10;
        }
        printf("%i\n", numeroInvertido);
    }
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int numeros[3], x = 3;
    
    printf("Digite três números inteiro (um de cada vez) de três dígitos:\n");
    
    while (x--) {
        scanf("%i", &numeros[x]);
        if (numeros[x] < 100 || numeros[x] > 999) {
            printf("ERRO - Apenas números inteiros positivos de três dígitos.\n"
                   "Digite novamente:\n");
            x++;
        }
    }
    
    digitosInvertidos(numeros);
    
    return 0;
}
