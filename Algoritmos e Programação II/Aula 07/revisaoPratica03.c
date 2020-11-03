/*
 * Arquivo:     revisaoPratica01.c
 * Data:        2020-10-31
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Escreva um programa que receba um número inteiro representando
 *              a quantidade total de segundos e, usando passagem de parâmetros
 *              por referência, converta a quantidade informada de segundos em
 *              Horas, Minutos e Segundos. Imprima o resultado da conversão no
 *              formato HH:MM:SS. Utilize o seguinte protótipo de função:
 *              void converteHora(int total_segundos, int *hora, int *min, int *seg) 
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 *
 */


#include <stdio.h>
#include <locale.h>

void convertHora(int totalSegundos, int *horas, int *minutos, int *segundos) {
    *horas    = (totalSegundos / 3600) % 24;
    *minutos  = (totalSegundos / 60) % 60;
    *segundos = totalSegundos % 60; 
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int totalSegundos, horas, minutos, segundos;
    
    printf("Digite o tempo desejado em segundos: ");
    scanf("%i", &totalSegundos);
    
    convertHora(totalSegundos, &horas, &minutos, &segundos);

    printf("Horário corespondente: %02i:%02i:%02i\n\n", horas, minutos, segundos);
    
    return 0;
}

