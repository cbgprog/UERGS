/*
 * Arquivo:     listaExercicios02.c
 * Data:        2020-10-07
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Elabore um programa que implemente uma função que receba um parâmetro
 *              (inteiro por valor) com o total de minutos passados ao longo do dia e receba
 *              também dois parâmetros (inteiros por referência) no qual deve preencher com o
 *              valor da hora e do minuto corrente. Faça um programa que leia do teclado
 *              quantos minutos se passaram desde meia-noite e imprima a hora corrente.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 *
 */


#include <stdio.h>
#include <locale.h>



void calculaHorario (int minutos, int *horaCorrente, int *minutoCorrente) {
    printf("Minutos desde a meia noite: %i\n", minutos);
    printf("Hora corrente: %02i:%02i\n", *horaCorrente, *minutoCorrente);
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int minutos, horaCorrente, minutoCorrente;
    
    printf("**********************\n"
           "* Exercício 02       *\n"
           "* Calculo de horário *\n"
           "**********************\n\n");
    
    printf("Digite o número de minutos desde a meia noite: ");
    scanf("%i", &minutos);
    
    if (minutos < 1440) {
        horaCorrente = (int) (minutos / 60);
        minutoCorrente = minutos - (horaCorrente * 60);
        calculaHorario(minutos, &horaCorrente, &minutoCorrente);
    } else {
        printf("Erro - Valor máximo: 1439\n\n");
    }
    
    return 0;
}
