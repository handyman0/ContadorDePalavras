#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    FILE *fp;
    char arquivo[MAX_LEN], palavra[MAX_LEN], buffer[MAX_LEN];
    int count = 0;

    // Entrada segura para o nome do arquivo
    printf("Digite o nome do arquivo de texto: ");
    fgets(arquivo, MAX_LEN, stdin);
    arquivo[strcspn(arquivo, "\n")] = '\0';  // Remover o caractere de nova linha, se presente

    // Entrada para a palavra a ser contada
    printf("Digite a palavra que deseja contar: ");
    scanf("%s", palavra);

    fp = fopen(arquivo, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    while (fgets(buffer, MAX_LEN, fp) != NULL) {
        char *ptr = buffer;
        size_t palavraLen = strlen(palavra);

        while ((ptr = strstr(ptr, palavra)) != NULL) {
            // Verifica se a palavra ocorre completamente ou parcialmente na linha
            if ((ptr == buffer || *(ptr - 1) == ' ' || *(ptr - 1) == '\t') &&
                (ptr[palavraLen] == '\0' || ptr[palavraLen] == ' ' || ptr[palavraLen] == '\t' || ptr[palavraLen] == '\n')) {
                count++;
            }
            ptr++;
        }
    }

    printf("A palavra '%s' ocorre %d vezes no arquivo.\n", palavra, count);

    fclose(fp);
    return 0;
}
