/*
 * Arquivo:     exerc02.c
 * Data:        2020-09-16
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Segundo exercício da aula 01.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 * 
 */

#include <stdio.h>
#include <locale.h>

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int gabarito[6], aposta[10], x, y, acertos = 0;
    char *resposta[3] = {"quadra", "quina", "sena"};
    
    printf("\n=== Apostas da megasena ===\n\n");
    printf("Digite os 6 números do Gabarito:\n");

    for (x = 0; x < 6; x++) {
        printf("%iº número: ", x + 1);
        scanf("%i", &gabarito[x]);
    }
    
    printf("\nDigite os 10 números da aposta:\n\n");
    
    for (x = 0; x < 10; x++) {
        printf("%iº número: ", x + 1);
        scanf("%i", &aposta[x]);
    }
    
    for (x = 0; x < 10; x++) {
        for (y = 0; y < 6; y++) {
            aposta[x] == gabarito[y] ? acertos++ : NULL;
        }
    }
    
    printf("\nVocê teve %i acertos.\n\n", acertos);
    
    if (acertos > 3 && acertos < 7) {
        printf("Num: %i\n\n", acertos);
        printf("Parabéns, você fez uma %s.\n\n", resposta[acertos - 4]);
    } else if (acertos > 6) {
        printf("\nParabéns, você fez uma sena\n\n");
    } else {
        printf("\nNenhum acerto. Mais sorte na próxima!\n\n");
    }
    
    return 0;
}
