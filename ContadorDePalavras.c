#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Definimos uma constante de 100 para definir o comprimento máximo de uma palavra ou linha no arquivo
#define MAX_LEN 100

int main() {
    FILE *fp;
    // variáveis com o comprimento maximo definido e a variavel count iniciada com 0
    char arquivo[MAX_LEN], palavra[MAX_LEN], buffer[MAX_LEN];
    int count = 0;
    // entradas
    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", arquivo);

    printf("digite a palavra que deseja contar: ");
    scanf("%s", palavra);
    // usei a função fopen para verificar se o arquivo foi aberto corretamente
    fp = fopen(arquivo, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    // usei a função fgets para ler cada linha do arquivo em buffer
    while (fgets(buffer, MAX_LEN, fp) != NULL) {
        char *ptr = buffer;
        while ((ptr = strstr(ptr, palavra)) != NULL) {
            count++;
            ptr++;
        }
    }

    printf("A palavra '%s' ocorre %d vezes no arquivo.\n", palavra, count);

    fclose(fp); //para fechar o arquivo 
    return 0;


}