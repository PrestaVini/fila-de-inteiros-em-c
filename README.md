# Fila de Inteiros em C

## Tema

Estrutura de dados: fila (FIFO), structs e funções.

## Enunciado da Atividade

Após a explicação sobre os algoritmos para inserir, imprimir e remover um elemento da fila, [baixe o código disponível nessa atividade](https://moodle.hto.ifsp.edu.br/pluginfile.php/164540/mod_assign/intro/filaInteiros-emBrancoVSC.zip) e programe as operações básicas inserir, remover e imprimir e as operações auxiliares inicializar, verificarVazia e verificarCheia da estrutura fila que manipule números inteiros.

As opções 5, 6 e 7 do menu servem para testar seu código e auxiliar a verificar se a sua implementação está correta. Caso o teste resulte em GREEN, quer dizer que passou no teste. Caso o teste resulte em RED, quer dizer que o código possui algum problema de lógica.

Submeta o seu código como resposta a essa atividade após ele ter passado (dado GREEN) em todos os testes.

## O que faz

O programa implementa uma fila de números inteiros com capacidade para **cinco elementos**, armazenados em um vetor dentro da estrutura `Fila`.

A fila segue a estratégia **FIFO (First In, First Out)**: o primeiro número inserido é o primeiro a ser removido.

A inserção ocorre no final da fila. Na remoção, o primeiro elemento é retirado e os demais são deslocados uma posição para a esquerda, mantendo a ordem.

### Funções principais

| Função | Responsabilidade |
|---|---|
| `inicializar` | Define o índice final como -1, deixando a fila logicamente vazia. |
| `verificarVazia` | Verifica se não há elementos na fila. |
| `verificarCheia` | Verifica se a capacidade máxima foi atingida. |
| `inserir` | Adiciona um inteiro ao final, se houver espaço. |
| `remover` | Retira e retorna o primeiro inteiro, deslocando os demais elementos. |
| `imprimir` | Mostra os valores e seus índices no vetor, do início ao final. |

### Menu

| Opção | Ação |
|---|---|
| 1 | Inicializar a fila. |
| 2 | Inserir um número. |
| 3 | Remover um número. |
| 4 | Imprimir a fila. |
| 5 | Executar o teste de inicialização. |
| 6 | Executar os testes de inserção. |
| 7 | Executar os testes de remoção. |
| 8 | Encerrar o programa. |

Por exemplo, após inserir 10, 20 e 30, a primeira remoção retorna 10 e deixa a fila com 20 e 30.

## Tecnologias Usadas

- Linguagem C;
- Structs e vetores;
- Estrutura de dados fila (FIFO);
- Funções e separação em arquivos `.c` e `.h`;
- Condicionais e laços de repetição;
- Biblioteca `stdio.h`, com `scanf` e `printf`;
- Rotinas de testes fornecidas na atividade;
- OnlineGDB para compilação e execução.

## Arquivos do Projeto

| Arquivo | Responsabilidade |
|---|---|
| `main.c` | Menu, leitura das opções e chamada das operações e testes. |
| `fila.h` | Estrutura `Fila`, capacidade máxima e declarações das funções. |
| `fila.c` | Implementação das operações e das rotinas de testes. |

O conteúdo dos três arquivos de código foi preservado conforme o material enviado.

## Como executar o código

### Pelo OnlineGDB

1. Acesse [OnlineGDB](https://www.onlinegdb.com/) e selecione a linguagem **C**.
2. Coloque o conteúdo de `main.c` no arquivo principal.
3. Adicione `fila.c` e `fila.h` ao mesmo projeto, mantendo os nomes e conteúdos.
4. Compile os dois arquivos `.c` juntos. O cabeçalho `fila.h` é incluído pelo código.
5. Clique em **Run**.
6. Escolha as opções do menu e informe números inteiros quando solicitado.
7. Utilize as opções **5, 6 e 7** para executar os testes.
8. Digite **8** para sair.

### Pelo terminal com GCC

Na pasta dos três arquivos:

```bash
gcc -std=c99 main.c fila.c -o fila_inteiros
```

No Linux/macOS:

```bash
./fila_inteiros
```

No PowerShell do Windows:

```powershell
.\fila_inteiros.exe
```

## Verificação dos testes

O código foi compilado com GCC em modo C99 e executado com as opções **5, 6 e 7**, seguidas de **8** para encerrar.

Resultado das rotinas incluídas no projeto:

- **15 resultados GREEN**;
- **0 resultados RED**.

Os testes verificam a inicialização, a inserção de diferentes quantidades, tentativas de ultrapassar a capacidade, remoção de fila vazia e a ordem de remoção dos elementos.

Esses resultados se referem aos testes fornecidos na atividade.

## Observação sobre a implementação

Ao tentar remover de uma fila vazia, `remover` informa que ela está vazia e retorna 0. A função principal também exibe “Numero removido: 0” nesse caso, embora nenhum elemento tenha sido removido.
