#include <stdio.h>
#include <locale.h>
#include <string.h>

FILE *data;

void createFile () {
    
    char nameFile[21];
    
    printf("Digite o nome para o arquivo: ");
    scanf("%20s", nameFile);
    
    data = fopen(nameFile,"a+");
    
    if (data != NULL) {
        printf("Arquivo %s foi criado.\n", nameFile);
    } else {
        printf("Erro ao criar o arquivo.\n");
    }
}

void useFile () {
    
    char nameFile[21];

    printf("Digite o nome para o arquivo: ");
    scanf("%20s", nameFile);

    data = fopen(nameFile, "a+");

    if (!data) {
        printf("ERRO - Arquivo não encontrado.\n");
    } else {
        printf("Arquivo %s foi aberto.\n", nameFile);
    }
}

void insertInFile() {
    
    int counter = 1, age;
    char name[21];
    printf("Digite Fim como nome de para encerrar.\n");
    
    do {
        printf("Registro nº %i\nNome: ", counter);
        scanf("%20s", name);
        
        if (!strcmp(name, "Fim") || !strcmp(name, "fim")) {
            break;
        }
        
        printf("Idade: ");
        scanf("%i", &age);
        
        fprintf(data, "%21s | %i\n", name, age);
        
    } while (1);
}

void showFile () {
    
    char name[21];
    int age;
    
    while (fscanf(data, "%20s | %i", name, &age) != EOF){
        printf("%20s | %i\n", name, age);
    }
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int option;
    
    do {
        printf("Escolha um opção:\n"
               "1 - Criar um arquivo.\n"
               "2 - Usar um arquivo existente.\n"
               "3 - Inserir dados no arquivo.\n"
               "4 - Ler dados do arquivo.\n"
               "5 - Sair do programa.\n→ ");
        scanf("%i", &option);
        
        switch (option) {
            case 1:
                createFile();
                break;
            case 2:
                useFile();
                break;
            case 3:
                insertInFile();
                break;
            case 4:
                showFile();
                break;
            case 5:
                if (data) {
                    fclose(data);
                }
                printf("Bye, bye!\n");
                break;
            default:
                printf("Opção inválida\n");
                break;
        }
        
    } while (option != 5);
    
    return 0;
}
