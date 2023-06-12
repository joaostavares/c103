# Ponteiros
## PONT - Alocação dinâmica de memória 2
Defina uma struct que armazene quatro notas de uma pessoa e a média destas notas.
Depois faça um programa que use um ponteiro para alocar memória para um vetor desta struct, leia 4 notas de várias, e as armazene no vetor alocado.

Por fim, o programa deve calcular a média das notas de cada um, armazená-la na struct e mostrar a média da turma, com 2 casas decimais.

IMPORTANTE: não se esqueça de desalocar a memória ocupada pela struct ao final do programa!

### Entrada
A entrada consiste de várias linhas:
- a primeira consiste de um único inteiro N, que corresponde ao número de alunos

- seguem -se N linhas, cada uma com 4 números inteiros, que correspondem às notas de cada aluno.

### Saída
Na saída, o programa deve mostrar a média das médias dos alunos, com 2 casas decimais.

| Exemplo de entrada                | Exemplo de saída |
|-----------------------------------|------------------|
| 2<br>40 32 51 70<br>78 95 80 100	 | 68.25            |