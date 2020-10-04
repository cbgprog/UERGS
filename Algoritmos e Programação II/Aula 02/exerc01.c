/*
 * Arquivo:     exerc01.c
 * Data:        2020-09-23
 * Disciplina:  Algoritmos e Programação II
 * Descrição:   Primeiro exercício da aula 02.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 * 
 */

#include <stdio.h>
#include <locale.h>

float ladoA, ladoB = 0;

void quadrado () {
    printf("A área do quadrado é: %f\n", ladoA * 2);
}

void retangulo () {
    printf("A área do retangulo é: %f\n", ladoA * ladoB);
}

void triangulo () {
    printf("A área do triangulo é: %f\n", (ladoA * ladoB) / 2);
}

void lerLados(int opcao) {
    
    char *figura[3] = {"Quadrado", "Retângulo", "Triâgulo"};
    
    printf("\nDigite o 1º lado do %s: ", figura[opcao - 1]);
    scanf("%f", &ladoA);
    
    if (opcao > 1) {
        printf("\nDigite o 2º lado do %s: ", figura[opcao - 1]);
        scanf("%f", &ladoB);
    }
    
    if (ladoA < 0 || ladoB < 0) {
        printf("\nERRO - Valores negativos não são possíveis para áreas.\n");
    } else {
        switch (opcao) {
            case 1: quadrado();  break;
            case 2: retangulo(); break;
            case 3: triangulo(); break;
        }
    }
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int opcao = -1;
    
    printf("+------------------+\n"
           "| Calculo de Áreas |\n"
           "+------------------+\n");
    
    do {
        printf("\nEscolha uma das opções abaixo:\n"
               " 1 - Área do Quadrado\n"
               " 2 - Área do Retângulo\n"
               " 3 - Área do Triâgulo\n"
               " 4 - Sair\n");
        
        scanf("%i", &opcao);
        
        switch (opcao) {
            case 1:
                lerLados(1);
            break;
            case 2:
                lerLados(2);
            break;
            case 3:
                lerLados(3);
            break;
            case 4:
                printf("Obrigado por usar nosso software.\nBye, Bye!!\n\n");
            break;
            default:
                printf("\nERRO - Opção inválida!!\n"
                       "Escolha uma das opções abaixo:\n");
            break;
        }
        
    } while (opcao != 4);
    
    return 0;
}
