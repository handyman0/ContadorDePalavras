# Contador de Palavras em Arquivo Texto

Este programa em C conta quantas vezes uma palavra específica ocorre em um arquivo de texto. Ele foi desenvolvido para ser simples, eficiente e agora oferece entradas mais seguras.

## Como Usar

1. **Compilação:**
   Certifique-se de ter um compilador C instalado em seu sistema. Use o seguinte comando para compilar o programa:

   ```bash
   gcc ContadorDePalavras.c -o contador_palavras
   ```

2. **Execução:**
   Execute o programa compilado, fornecendo o nome do arquivo de texto e a palavra que deseja contar quando solicitado.

   ```bash
   ./contador_palavras
   ```

3. **Entradas:**
   - **Nome do Arquivo de Texto:** Insira o nome do arquivo de texto desejado. A entrada agora é segura para espaços e caracteres especiais.
   - **Palavra a Contar:** Digite a palavra que você deseja contar no arquivo.

4. **Saída:**
   O programa exibirá o número de ocorrências da palavra no arquivo.

## Exemplo de Uso

Suponha que você tenha um arquivo de texto chamado `exemplo.txt` com o seguinte conteúdo:

```
Este é um exemplo de arquivo de texto.
Aqui, a palavra exemplo ocorre várias vezes.
Este exemplo serve para demonstrar o funcionamento do programa.
```

Ao executar o programa e fornecer `exemplo.txt` como o arquivo de texto e `exemplo` como a palavra a contar, a saída será:

```
Digite o nome do arquivo de texto: exemplo.txt
Digite a palavra que deseja contar: exemplo
A palavra 'exemplo' ocorre 3 vezes no arquivo.
```

## Notas Adicionais

- Certifique-se de que o arquivo de texto esteja no mesmo diretório que o programa ou forneça o caminho completo do arquivo.
- O programa faz distinção entre maiúsculas e minúsculas ao contar as palavras.

Sinta-se à vontade para explorar e modificar o código conforme necessário. Qualquer dúvida ou problema, não hesite em entrar em contato.
