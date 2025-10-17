# Desafio Detective Quest - Estruturas de Dados e Investigação

Bem-vindo ao desafio **Detective Quest**! Neste jogo de mistério, o jogador explora uma mansão, encontra pistas e relaciona evidências a suspeitos. Para tornar isso possível, você atuará como programador responsável por implementar toda a lógica de estruturas de dados do jogo.

A **Enigma Studios**, especializada em jogos educacionais, contratou você para criar a base de funcionamento da mansão e das investigações usando **árvore binária**, **árvore de busca** e **tabela hash**.

O desafio está dividido em três níveis: **Novato**, **Aventureiro** e **Mestre**, com cada nível adicionando mais complexidade ao anterior.  
**Você deve escolher qual desafio deseja realizar.**

🚨 **Atenção:** O nível Novato foca apenas na árvore binária de navegação de cômodos. Ideal para começar com estruturas básicas.

---

## 🎮 Nível Novato: Mapa da Mansão com Árvore Binária

No nível Novato, você criará a árvore binária que representa o **mapa da mansão**. Cada sala é um nó, e o jogador poderá explorar os caminhos à esquerda ou à direita, começando pelo "Hall de Entrada".

🚩 **Objetivo:** Criar um programa em C que:

- Construa dinamicamente uma árvore binária representando os cômodos.
- Permita que o jogador explore a mansão interativamente (esquerda, direita).
- Exiba o nome de cada cômodo visitado até alcançar um nó-folha (fim do caminho).

⚙️ **Funcionalidades do Sistema:**

- A árvore é criada automaticamente via `main()` com `criarSala()`.
- O jogador interage com o jogo usando `explorarSalas()`, escolhendo entre:
  - `e` → ir para a esquerda
  - `d` → ir para a direita
  - `s` → sair da exploração

📥 **Entrada** e 📤 **Saída de Dados:**

*   O usuário navega pela mansão com base nas opções exibidas no terminal.
*   O programa mostra o nome da sala visitada a cada passo.

**Simplificações para o Nível Novato:**

*   Apenas árvore binária (sem inserção ou remoção durante o jogo).
*   A árvore é montada estaticamente via código.
*   Estrutura imutável em tempo de execução.

---
Exemplo de saída:

EXPLORAÇÃO DA MANSÃO ASSOMBRADA
Você começa no Hall de Entrada.

Você está na sala: 🏰 Hall de Entrada

Para onde deseja ir?
  [e] Ir para a esquerda → Biblioteca
  [d] Ir para a direita → Cozinha
  [s] Sair da exploração
Escolha: e

Você está na sala: 🏰 Biblioteca

Para onde deseja ir?
  [e] Ir para a esquerda → Quarto Principal
  [d] Ir para a direita → Jardim
  [s] Sair da exploração
Escolha: d

Você está na sala:  Jardim
Esta sala não tem saídas. Você chegou ao fim do caminho!
