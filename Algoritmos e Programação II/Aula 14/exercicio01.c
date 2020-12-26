/*
 * Arquivo:     exercicio01.c
 * Data:        2020-12-26
 * Disciplina:  Algoritmos e Programação II - Aula 12
 * Descrição:   Faça um programa que pergunte ao usuário quantos
 *              valores ele deseja armazenar em um vetor de doubles,
 *              depois use a função MALLOC para reservar (alocar) o
 *              espaço de memória de acordo com o especificado pelo
 *              usuário. Use este vetor dinâmico como um vetor comum,
 *              atribuindo aos 10 primeiros elementos do vetor
 *              valores aleatórios (rand) entre 0 e 100. Exiba na
 *              tela os valores armazenados nos 10 primeiros
 *              elementos do vetor (O vetor deve ter pelo menos um
 *              tamanho igual a 10 doubles, ou mais).
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 * 
 */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	
    setlocale(LC_ALL, "Portuguese");
    srand( (unsigned) time(NULL) );
    
	int tamanho, x;
    double *vetor;
    
    printf("Digite o tamanho desejado para o vetor: ");
    scanf("%i", &tamanho);
    
    if (tamanho <= 10) {
        printf("O tamanho mínimo para o vetor é 10.\n"
               "Ajustado automaticamente para 10.\n");
        tamanho = 10;
    }
	
    vetor = (double *) malloc(tamanho * sizeof(double));
    
    printf("+---------+-----------------+\n"
           "| Posição | Valor aleatório |\n"
           "+---------|-----------------+\n");
    
    for (x = 0; x < tamanho; x++) {
        vetor[x] = (double) (rand() % 100000 + 1) / 1000;
        printf("| %7i | %15.3f |\n", x + 1, vetor[x]);
    }

    printf("+---------+-----------------+\n");
    
    free(vetor);
    
	return 0;
}
