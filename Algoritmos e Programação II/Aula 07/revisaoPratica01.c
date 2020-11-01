/*
 * Arquivo:     revisaoPratica01.c
 * Data:        2020-10-31
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Elabore um programa que lê do teclado 2 valores inteiros no 
 *              main e posteriormente descreva uma função recursiva potenciaRec(x,y) 
 *              que retorne o valor de x^y.  Observe as regras da potência e não
 *              utilize a função pow da biblioteca math.h
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 *
 */


#include <stdio.h>
#include <locale.h>

long int potencia (long int base, long int expoente) {
    if ( base == 0 || base == 1 ) return base;
    if ( !expoente ) return 1;
    while (expoente--) return base *= potencia(base, expoente);
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    long int base, expoente;
    
    printf("\nDigite valores inteiros para calcular a potência\n");
    printf("%10s: ", "Base");
    scanf("%li", &base);
    printf("%10s: ", "Expoente");
    scanf("%li", &expoente);
    
    printf("%10s: %li^%li = %li\n\n", "Resultado", base, expoente, potencia(base, expoente));
    
    return 0;
}

