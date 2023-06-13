# Listas Ligadas
## LIST - Insert after
Faça um programa que leia vários números inteiros e os insira em uma lista ligada, inicialmente vazia, usando a função push().

Depois, leia dois inteiros X e Y, e adicione Y à lista, depois do nó que contém X em seu campo info.

Ao final, o programa deve ir removendo os dados inseridos usando pop(), e mostrando-os na tela.
### Entrada
A entrada consiste de duas linhas:

- a primeira consiste de vários inteiros, que devem ser inseridos na lista. O último número desta linha será -1, que não deve ser inserido.

- a segunda linha tem dois inteiros X eY.
### Saída
O programa deve imprimir a lista depois de inserir Y após o nó cujo campo info é igual a X.


| Exemplo de entrada   | Exemplo de saída |
|----------------------|------------------|
| 2 1 4 3 6 -1<br>4 5	 | 	6 3 4 5 1 2     |
| 4 3 2 5 6 -1<br>4 7  | 6 5 2 3 4 7      |
| 2 1 3 6 -1<br>6 8    | 6 8 3 1 2        |