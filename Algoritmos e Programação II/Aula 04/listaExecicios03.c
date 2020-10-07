/*
 * Arquivo:     listaExercicios03.c
 * Data:        2020-10-07
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Elabore um programa que leia um número e depois escreva uma função
 *              que receba este valor inteiro lido como referência e retorne o resto da
 *              divisão deste número por 10. Altere também o valor da variável passada
 *              por referência, dividindo-a por 10.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 *
 */


#include <stdio.h>
#include <locale.h>

int restoPorDez (int *valor) {
    int resto = *valor % 10;
    *valor /= 10;
    return resto;
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int valor;
    
    printf("*****************\n"
           "* Exercício 03  *\n"
           "* Resto por dez *\n"
           "*****************\n\n");
    
    printf("Digite um valor: ");
    scanf("%i", &valor);
    
    printf("\nResto por dez: %i\n", restoPorDez(&valor));
    printf("Valor dividido por dez: %i\n\n", valor);
    
    return 0;
}
