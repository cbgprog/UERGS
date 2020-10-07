/*
 * Arquivo:     listaExercicios01.c
 * Data:        2020-10-07
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   O programa abaixo lê dois dados inteiros recebidos pelo
 *              teclado e deveria imprimi-los em ordem crescente. Explique por que o 
 *              programa não funciona corretamente e introduza as correções mínimas
 *              necessárias para torná-lo operante.            
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 *
 * Resposta:    1 - O protótipo da função troca foi declarado dentro da função main e
 *                  deve ser movido para antes do main.
 *              2 - O protótipo da função troca deve ter as variáveis de entrada
 *                  dado1 e dado2
 *              3 - Outros erros não foram encontrados, e o programa funciona mesmo
 *                  sem arrumar o protótipo da função (no Linux) então não a erros.
 *
 */

#include <stdio.h>

//void troca(int *dado1, int *dado2);

int main()
{
    int dado1, dado2;
    void troca(int *, int *); //Local errado e falta as variáveis dado1 e dado2.
    
    printf("Entre com dois dados inteiros: ");
    scanf("%d %d",&dado1, &dado2);
    
    troca(&dado1, &dado2);
    printf("Dados em ordem crescente: %d \t %d \n", dado1, dado2);
    
    return 0;
}


void troca(int *dado1, int *dado2)
{
    int temp;
    if(*dado1 > *dado2)
    {
        temp = *dado1;
        *dado1 = *dado2;
        *dado2 = temp;
    }
}
