# ContadorDePalavras
Este algoritmo em C lê um arquivo de texto e conta o número de ocorrências de uma palavra específica, fornecida pelo usuário. Ele começa pedindo ao usuário que digite o nome do arquivo de texto e a palavra que deseja contar. Em seguida, ele abre o arquivo para leitura usando a função `fopen()`, e lê cada linha do arquivo usando a função `fgets()`. Em um loop while aninhado, ele usa a função `strstr()` para encontrar a primeira ocorrência da palavra na linha e incrementa o contador de ocorrências, movendo o ponteiro para a próxima posição da linha para encontrar outras ocorrências. Finalmente, ele exibe a contagem de ocorrências para o usuário e fecha o arquivo usando a função `fclose()`. 

Este algoritmo é simples e eficaz para o objetivo de contar o número de ocorrências de uma palavra em um arquivo de texto. Ele usa funções padrão da biblioteca C para entrada e saída de arquivos e manipulação de strings, tornando-o fácil de entender e implementar.
