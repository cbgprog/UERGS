/*
 * Arquivo:     exerc01.c
 * Data:        2020-12-02
 * Disciplina:  Algoritmos e Programação II - Aula 12
 * Descrição:   Crie um programa que permita armazenar o nome,
 *              a altura e a data de nascimento de até 10 pessoas.
 *              Cada pessoa deve ser representada por uma struct
 *              dentro de um vetor. O nome, a data de nascimento e 
 *              a altura de cada pessoa devem ser informados pelo
 *              teclado. Posteriormente imprima os nomes das pessoas
 *              que possuem altura superior a 1,78.
 * Autor:       Claiton B. Garcia <cbgprog@gmail.com>
 * 
 */

#include <stdio.h>
#include <locale.h>



// Definimos um tipo struct chamado pessoas
// contendo nome, altura e data de nascimento:

typedef struct {
    char nome[21];
    float altura;
    int dia, mes, ano;
} pessoas;

void limparBuffer () {
    int letra;
    do {
        letra = fgetc(stdin);
    } while (letra != EOF && letra != '\n');
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int x, numeroDeUsuarios = 2;
    
    // Criamos o vetor usuarios do tipo pessoas:
    pessoas usuarios[10];
    
    // Entrada de dados pelo teclado:
    printf("Informe o nome de 10 usuários:\n");
    
    for (x = 0; x < numeroDeUsuarios; x++) {
        printf("Nome do %i° usuário: ", x + 1);
        scanf("%20[^\n]s", usuarios[x].nome);
        limparBuffer();
        printf("Altura: ");
        scanf("%f", &usuarios[x].altura);
        printf("Data de Nascimento:\n");
        printf("Dia: ");
        scanf("%i", &usuarios[x].dia);
        printf("Mês: ");
        scanf("%i", &usuarios[x].mes);
        printf("Ano: ");
        scanf("%i", &usuarios[x].ano);
        limparBuffer();
    }
    
    // Exibir na tela usuários com mais de 1.78 de altura:
    printf("\n%-21s | %6s | %s\n---------------------------------------------------\n",
            "Nome", "Altura", "Data de Nascimento");
    for (x = 0; x < numeroDeUsuarios; x++) {
        if (usuarios[x].altura > 1.78) {
            printf("%-21s | %6.2f | %02i/%02i/%4i\n",
                    usuarios[x].nome,
                    usuarios[x].altura,
                    usuarios[x].dia,
                    usuarios[x].mes,
                    usuarios[x].ano);
        }
    }
    
    printf("\nAté mais e obrigado pelos peixes!!\n");
    
    return 0;
}

